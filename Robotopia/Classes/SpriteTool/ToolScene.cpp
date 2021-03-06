#include "pch.h"

#include "SpriteTool/ToolScene.h"
#include "SpriteTool/ToolSpriteEditLayer.h"
#include "ToolAniPlayLayer.h"

bool ToolScene::init()
{
	if (!cocos2d::Scene::init())
	{
		return false;
	}

	m_EditLayer = ToolSpriteEditLayer::create();
	this->addChild(m_EditLayer);
	
	m_AniLayer = ToolAniPlayLayer::create();
	this->addChild(m_AniLayer);
	scheduleUpdate();

	return true;
}


cocos2d::Scene* ToolScene::createScene()
{
	ToolScene* scene = ToolScene::create();

	return scene;
}

void ToolScene::update(float dTime)
{
	m_EditLayer->update(dTime);
}
