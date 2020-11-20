#ifndef _MONSTER_H
#define _MONSTER_H

class Monster
{
public:
	int hp;
	int atk;
	Monster(int hp = 0, int atk = 0) : hp(hp), atk(atk) {}
	virtual ~Monster();
	virtual Monster* clone() = 0;
	virtual void attack() = 0;
	void showStatus();
	void changeStatus(int hp, int atk);
};

class Goblin : public Monster
{
public:
	Goblin(int hp = 100, int atk = 20) : Monster(hp,atk) {}
	virtual void attack();
	virtual Monster* clone();




};

class Orc : public Monster
{
public:
	Orc(int hp = 300, int atk = 50) : Monster(hp,atk) {}
	virtual void attack();
	virtual Monster* clone();



};

class MonsterManager
{
	Monster* monster;
public:
	MonsterManager(Monster* monster) : monster(monster) {}
	Monster* monsterSpawn();
	void setMonster(Monster* monster);


};

#endif