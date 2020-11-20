#pragma once
#include"Monster.h"

class Spawner
{
	Monster* m_prototype;
public:

	Spawner(Monster* prototype) :m_prototype(prototype) {}

	~Spawner() {}

	Monster* spawnMonster()
	{
		return m_prototype->clone();
	}

};
