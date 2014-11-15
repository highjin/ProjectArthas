/************************************************************************/
/*
CLASS			: Monster
Author			: 김성연
역할				: 몬스터전체의 추상클래스
최종 수정일자		: 2014-11-15
최종 수정자		:
최종 수정사유		:
Comment			:
*/
/************************************************************************/
#pragma once
#include "Util.h"
#include "Component.h"

BEGIN_NS_AT

class Monster : public Component
{
public:
	OVERRIDE bool			init();
	OVERRIDE void			update(float dTime);
	OVERRIDE void			enter();
	OVERRIDE void			exit();
	ABSTRACT bool			initMosnter() = 0;

protected:

};

END_NS_AT