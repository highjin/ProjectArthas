/************************************************************************/
/*
CLASS			: MonsterDevil
Author			: 김성연
역할				: DevilMonster class
최종 수정일자		: 2014-12-09
최종 수정자		:
최종 수정사유		:
Comment			: DevilMonster 동작 정의.
*/
/************************************************************************/
#pragma once
#include "Creature.h"
#include "Util.h"

class AnimationComponent;
class PathFinderByBFS;
class MonsterDevil : public Creature
{
public:
	enum State
	{
		STAT_IDLE,
		STAT_MOVE,
		STAT_READYATTACK,
		STAT_ATTACK,
		STAT_NUM,
	};

	virtual bool					init();
	virtual void					update(float dTime);
	virtual void					enter();
	virtual void					exit();
	virtual void					dead();

	virtual const AllStatus&		getInfo() const;

	void							move(Creature* target, double dTime, int idx);
	void							enterMove();
	void							exitMove();
	void							attack(Creature* target, double dTime, int idx);
	void							enterAttack();
	void							readyAttack(Creature* target, double dTime, int idx);
	void							enterReadyAttack();

	void							idleTransition(Creature* target, double dTime, int idx);
	void							moveTransition(Creature* target, double dTime, int idx);
	void							attackTransition(Creature* target, double dTime, int idx);
	void							readyAttackTransition(Creature* target, double dTime, int idx);
	
	virtual bool					onContactBegin(cocos2d::PhysicsContact& contact);
	virtual void					onContactSeparate(cocos2d::PhysicsContact& contact);

	CREATE_FUNC(MonsterDevil);

private:
	bool						checkArrived();
	bool						isMoving();

	AllStatus					m_Info;
	AnimationComponent*			m_ArrowAniComponent = nullptr;
	int							m_MaxSightBound = 500;
	cocos2d::Point				m_TargetPos;
	int							m_MoveStartTime = 0;
	PathFinderByBFS*			m_PathFinder = nullptr;
	std::vector<cocos2d::Point> m_Path;
	cocos2d::Point				m_DstPos;
	int							m_PathIdx = 0;
	bool						m_IsArrived = false;
};