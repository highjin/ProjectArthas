#include "pch.h"
#include "RoomLayer.h"
#include "GameManager.h"
#include "DataManager.h"
#include "ComponentManager.h"
#include "Block.h"
#include "MovingBlock.h"

bool Arthas::RoomLayer::init()
{
	m_TileSize = GET_DATA_MANAGER()->getTileSize();
	return true;
}

void Arthas::RoomLayer::update(float dTime)
{

}

void Arthas::RoomLayer::initRoom(const RoomData& roomData)
{
	setPosition(cocos2d::Point(roomData.x*m_TileSize.width, roomData.y*m_TileSize.height));
	makeTiles(roomData);

	//test
	auto movingBlock = Arthas::MovingBlock::create();
	movingBlock->initTile(cocos2d::Point(roomData.width / 3, roomData.height / 3), m_TileSize , 
						  cocos2d::Size(roomData.width / 3, m_TileSize.height));

	addChild(movingBlock);
}

void Arthas::RoomLayer::makeTiles(const RoomData& roomData)
{
	int maxXIdx = roomData.width;
	int maxYIdx = roomData.height;
	//sentinel 무시
	for(int yIdx = 0; yIdx < maxYIdx; ++yIdx)
	{
		makeTilesHorizontal(roomData, yIdx, maxXIdx, maxYIdx);
	}

	for(int xIdx = 0; xIdx < maxXIdx; ++xIdx)
	{
		makeTilesVertical(roomData, xIdx, maxXIdx, maxYIdx);
	}
}


//가로로 연결된 타일 생성
void Arthas::RoomLayer::makeTilesHorizontal(const RoomData& roomData, int yIdx, int maxXIdx, int maxYIdx)
{
	TileMakingState state = NONE;
	bool		  isMaking = false;
	ComponentType prevCompType = CT_NONE;
	ComponentType currentCompType = CT_NONE;
	cocos2d::Size physicalSize(0, m_TileSize.height), spriteSize(0, m_TileSize.height);
	cocos2d::Point origin(0, yIdx*m_TileSize.height);

	for(int xIdx = 0; xIdx < maxXIdx; ++xIdx)
	{
		prevCompType = currentCompType;
		currentCompType = getTypeByIndex(roomData, xIdx, yIdx, maxXIdx, maxYIdx);
		if(isHorizontalTile(roomData, xIdx, yIdx, maxXIdx, maxYIdx))
		{
			if(!isMaking)
			{
				isMaking = false;
				origin.x = xIdx*m_TileSize.width;
			}
			else if(prevCompType != currentCompType)
			{
				addTile(origin, physicalSize, spriteSize);
				origin.x = xIdx*m_TileSize.width;
				physicalSize.width = 0;
				spriteSize.width = 0;
			}
			physicalSize.width += m_TileSize.width;
			spriteSize.width += m_TileSize.width;
		}
		else
		{
			if(!isMaking)
			{

			}
		}
	}
}


void Arthas::RoomLayer::changeState(OUT TileMakingState* state, const RoomData& data, 
									int xIdx, int yIdx, int maxXIdx, int maxYIdx)
{
	switch(*state)
	{
		case Arthas::RoomLayer::NONE:
			if(isHorizontalTile(data, xIdx, yIdx, maxXIdx, maxYIdx))
			{
				*state = APPEND;
			}
			else
			{
				*state = NONE;
			}
			break;

		case Arthas::RoomLayer::APPEND:
			if(isHorizontalTile(data, xIdx, yIdx, maxXIdx, maxYIdx))
			{
				*state = CREATE;
			}
			break;

		case Arthas::RoomLayer::APPEND_ONLY_SPRITE:
			break;
		case Arthas::RoomLayer::CREATE:
			break;
		case Arthas::RoomLayer::CREATE_AND_RESTART:
			break;
		default:
			break;
	}

}


void Arthas::RoomLayer::makeTilesVertical(const RoomData& roomData, int xIdx, int maxXIdx, int maxYIdx)
{

}

void Arthas::RoomLayer::setPhysicsWorld(cocos2d::PhysicsWorld* physicsWorld)
{
	m_PhysicsWorld = physicsWorld;
}

bool Arthas::RoomLayer::isHorizontalTile(const RoomData& roomData, int xIdx, int yIdx, int maxXIdx, int maxYIdx)
{
	bool ret = false;
	int maxContainerIdx = (signed) roomData.data.size() - 1;
	if (isAvailableIndex(xIdx,yIdx,maxXIdx, maxYIdx) && //boundary check
	   roomData.data[yIdx * maxXIdx + xIdx] > 0) //현재 데이터가 타일
	{
		//위나 아래 타일이 범위 바깥 타일인 경우 무조건 빈 타일로 취급
		int upTile = isAvailableIndex(xIdx, yIdx + 1, maxXIdx, maxYIdx) ?
						roomData.data[(yIdx + 1)*maxXIdx + xIdx] : 0;
		int downTile = isAvailableIndex(xIdx, yIdx - 1, maxXIdx, maxYIdx) ?
			roomData.data[(yIdx - 1)*maxXIdx + xIdx] : 0;

		if ( upTile == 0 || //윗칸 데이터가 빈칸
		   downTile == 0 ) //아래칸 데이터가 빈칸
		{
			ret = true;
		}
	}
	return ret;
}

bool Arthas::RoomLayer::isVerticalTile(const RoomData& roomData, int xIdx, int yIdx, int maxXIdx, int maxYIdx)
{
	bool ret = false;
	int maxContainerIdx = (signed) roomData.data.size() - 1;
	if (isAvailableIndex(xIdx, yIdx, maxXIdx, maxYIdx) && //boundary check
	   roomData.data[yIdx * maxXIdx + xIdx] > 0) //현재 데이터가 타일
	{ 
		//왼쪽이나 오른쪽 타일이 범위 바깥 타일인 경우 무조건 빈 타일로 취급
		int leftTile = getTypeByIndex(roomData, xIdx - 1, yIdx, maxXIdx, maxYIdx);
		int rightTile = getTypeByIndex(roomData, xIdx + 1, yIdx, maxXIdx, maxYIdx);

		if(!isHorizontalTile(roomData, xIdx, yIdx, maxXIdx, maxYIdx) && //Horizontal과 곂치치 않을 것
		   ( leftTile == 0 || //오른쪽 칸 데이터가 빈칸
		   rightTile == 0 )) //왼쪽 칸 데이터가 빈칸
		{
			ret = true;
		}
	}
	return ret;
}

void Arthas::RoomLayer::addTile(cocos2d::Point origin, cocos2d::Size physicalSize, cocos2d::Size spriteSize)
{
	auto newTile = GET_COMPONENT_MANAGER()->createComponent<Block>();
	addChild(newTile);
	newTile->initTile(origin, physicalSize, spriteSize);
}

bool Arthas::RoomLayer::isAvailableIndex(int xIdx, int yIdx, int maxXIdx,int maxYIdx)
{
	return xIdx >=0 && xIdx < maxXIdx &&
			yIdx >= 0 && yIdx < maxYIdx;
}

Arthas::ComponentType Arthas::RoomLayer::getTypeByIndex(const RoomData& roomData, int xIdx, int yIdx, int maxXIdx, int maxYIdx)
{
	return isAvailableIndex(xIdx, yIdx, maxXIdx,maxYIdx) ?
			roomData.data[yIdx * maxXIdx + xIdx] : CT_NONE;
}

