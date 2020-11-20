#include <iostream>
#include "Monster.h"
using namespace std;

Monster::~Monster()
{
	delete this;
}

void Monster::showStatus()
{
	cout << "HP : " << hp << ", ATK : " << atk << endl;
}

void Monster::changeStatus(int hp, int atk)
{
	this->hp = hp;
	this->atk = atk;
}

void Goblin::attack()
{
	cout << "Goblin Attack" << endl;
}

Monster* Goblin::clone()
{
	return new Goblin(hp, atk);
}

void Orc::attack()
{
	cout << "Orc Attack" << endl;
}

Monster* Orc::clone()
{
	return new Orc(hp, atk);
}

Monster* MonsterManager::monsterSpawn()
{
	return monster->clone();
}

void MonsterManager::setMonster(Monster* monster)
{
	this->monster = monster;
}

