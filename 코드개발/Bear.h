#pragma once
#include "Monster.h"
#include<iostream>

using namespace std;

class Bear : public Monster
{
	int m_Health;
	int m_Ark;
	int m_Def;

public:

	Bear(int hp, int ark, int def) :m_Health(hp), m_Ark(ark), m_Def(def) 
	{

	}

	~Bear() 
	{
	
	}

	virtual Monster* clone()
	{
		return new Bear(m_Health, m_Ark, m_Def);
	}

	virtual void hi()
	{
		cout <<  "곰(체력:"<<m_Health<<" 공격력:"<<m_Ark<<" 방어력:"<<m_Def<<")이 소환 되었습니다." << endl;
	}

};
