#pragma once
#include "Monster.h"
#include "Elf.h"
#include<iostream>

using namespace std;

class DarkElf : public Elf
{
	int m_Health;
	int m_Ark;
	int m_Def;

public:
	DarkElf(int hp, int ark, int def) :m_Health(hp), m_Ark(ark), m_Def(def)
	{

	}

	~DarkElf()
	{

	}

	virtual Monster* clone()
	{
		return new DarkElf(m_Health, m_Ark, m_Def);
	}

	virtual void hi()
	{
		cout << "다크엘프(체력:" << m_Health << " 공격력:" << m_Ark << " 방어력:" << m_Def << ")가 소환 되었습니다." << endl;
	}

	virtual void MobSkill()
	{
		cout << "다크엘프의 어둠화살!" << endl;
	}
};
