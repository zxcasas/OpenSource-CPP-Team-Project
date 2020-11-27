#pragma once
#include "Monster.h"
#include "Elf.h"
#include<iostream>

using namespace std;

class HighElf : public Elf
{
	int m_Health;
	int m_Ark;
	int m_Def;

public:
	HighElf(int hp, int ark, int def) :m_Health(hp), m_Ark(ark), m_Def(def)
	{

	}

	~HighElf()
	{

	}

	virtual Monster* clone()
	{
		return new HighElf(m_Health, m_Ark, m_Def);
	}

	virtual void hi()
	{
	        Elf::hi();
		cout << "하이엘프(체력:" << m_Health << " 공격력:" << m_Ark << " 방어력:" << m_Def << ")가 소환 되었습니다." << endl;
	}

	virtual void MobSkill()
	{
		cout << "하이엘프의 신성한 빛!" << endl;
	}
};
