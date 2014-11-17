/************************************************************************/
/*
	CLASS			: BaseComponent
	Author			: �迬��
	����				: ��� ������Ʈ���� �߻�Ŭ����
	���� ��������	: 2014-10-29
	���� ������		:
	���� ��������	:
	Comment			: ��� ��ӹ޾Ƽ� ������ٴ� ���� ������ ��
					  ������Ʈ ������. �ƹ��͵� �ȳ־���.
*/
/************************************************************************/
#pragma once
#include "cocos2d.h"
#include "Util.h"


class BaseComponent : public cocos2d::Node
{
public:
	OVERRIDE bool				init();
	ABSTRACT void				update( float dTime ) = 0;
	ABSTRACT void				enter() = 0;
	ABSTRACT void				exit() = 0;

	void						addComponent( BaseComponent* BaseComponent );
	BaseComponent*					getComponent(ComponentType type)const;
	void						removeComponent( BaseComponent* remComponent );
	void						removeAllComponent();
	ComponentType				getType()const;
protected:
	ComponentType				m_Type;
	cocos2d::Size				m_Size;
};
