﻿#include "TriggerManager.h"
#include "Trigger.h"
#include "StateChangeTrigger.h"
#include "ContactTrigger.h"
#include "KeyboardTrigger.h"


bool Arthas::TriggerManager::init()
{
	return true;
}

Arthas::TriggerManager::TriggerManager()
{

}

Arthas::TriggerManager::~TriggerManager()
{

}

Arthas::Trigger* Arthas::TriggerManager::createTrigger(TriggerType type)
{
	Trigger* createdTrigger;

	switch (type)
	{
	case TT_STATE_CHANGE:
		createdTrigger = (Trigger*)new Arthas::StateChangeTrigger();
		break;
	case TT_CONTACT:
		createdTrigger = (Trigger*)new Arthas::ContactTrigger();
		break;
	case TT_KEYBOARD:
		createdTrigger = (Trigger*)new Arthas::KeyboardTrigger();
		break;
	}

	return createdTrigger;
}