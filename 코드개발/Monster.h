#pragma once
#include <iostream>

using namespace std;

class Monster
{
public:
	Monster() {}
	virtual ~Monster() {}
	virtual Monster* clone() = 0;
	virtual void hi() = 0;

	virtual void MobAttack()
	{
		cout << "기본 공격" << endl;
	}

	virtual void MobSkill()
	{
		cout << "스킬 공격" << endl;
	}
};
