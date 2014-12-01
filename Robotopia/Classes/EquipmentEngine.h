/************************************************************************/
/*
CLASS			: EquipmentEngine
Author			: 김성연
역할				: Engine 장비 클래스
최종 수정일자		: 2014-11-28
최종 수정자		:
최종 수정사유		:
Comment			:
/************************************************************************/

#pragma once
#include "Util.h"
#include "EquipmentAbstract.h"

class EquipmentEngine : public EquipmentAbstract
{
public:
	struct EngineInfo : public EquipmentInfo
	{
		EngineList m_EngineType = EL_END;
		float m_ElectronicPower = 0.f;
		float m_SteamEffectiveness = 0.f;
	};

	OVERRIDE bool				init();
	OVERRIDE void				update(float dTime);
	OVERRIDE void				enter();
	OVERRIDE void				exit();
	OVERRIDE bool				onContactBegin(cocos2d::PhysicsContact& contact);
	OVERRIDE void				onContactSeparate(cocos2d::PhysicsContact& contact);
	
	CREATE_FUNC(EquipmentEngine);
	
	void						setEquipment(EngineInfo engineInfo);
	void						setEquipment(EquipmentType equipmentType, EngineList engineType, int level, int kWatt,
											 int upgradePrice, bool isLock, float electronicPower, float steamEffectiveness);
	
	EngineInfo					getEquipmentInfo();


private:
	EngineInfo m_EngineInfo;

};
