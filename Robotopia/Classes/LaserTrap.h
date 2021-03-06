﻿/************************************************************************/
/*
CLASS			: TurretBlock
Author			: 김성연
역할				: 주기적으로 공격하는 블럭
최종 수정일자		: 2014-11-07
최종 수정자		:
최종 수정사유		:
Comment			: 만들고 반드시 setRect할 것!
*/
/************************************************************************/

#pragma once
#include <Tile.h>
#include "cocos2d.h"
#define LASER_WIDTH 1
#define MAX_INTERVAL 3
#define MAX_HEIGHT 1024*16
class LaserTrap : public Tile
{
public:
	LaserTrap();
	virtual ~LaserTrap();

	virtual bool	init();
	virtual void	update(float dTime);
	virtual void	enter();
	virtual void	exit();

	virtual void	initTile(cocos2d::Rect tileRect);
	void			setLaser(bool isVertical, int interval);
	void			switchTurn(bool isOn);

	CREATE_FUNC(LaserTrap);
private:
	cocos2d::Sprite*	m_Laser = nullptr;
	bool				m_IsOn = false;
	int					m_Interval = 1;
	float				m_Duration = 0.5f;
	float				m_AccTime = 0.f;
};

