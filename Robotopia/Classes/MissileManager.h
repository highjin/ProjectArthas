/************************************************************************/
/*
CLASS			: MissileManager
Author			: 김성연
역할				: 각종 미사일 미리 생성 및 할당
최종 수정일자		: 2014-11-12
최종 수정자		:
최종 수정사유	    :
Comment			:
*/
/************************************************************************/

#pragma once

#include "Util.h"



class Missile;
class MissileManager
{
public:
	MissileManager();
	~MissileManager();

	bool					init();
	Missile*				launchMissile(ComponentType missileType, cocos2d::Point pos, 
									   Direction attackDir = DIR_NONE,
									   cocos2d::Size contentsSize = cocos2d::Size::ZERO,
									   float damage = 0,
									   cocos2d::Vec2 velocity = cocos2d::Vec2::ZERO, 
									   cocos2d::Point targetPos = cocos2d::Point::ZERO); ///< 디폴트값 남발 하는것 좋지 않다. 나중에 버그로 돌아올 가능성이 높다. 데이터는 최대한 정확하게...

private:
	Missile*				createMissile(ComponentType missileType);
	std::vector<Missile*>   m_Missiles;

};

