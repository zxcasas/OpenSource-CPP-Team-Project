#include <iostream>
#include "Monster.h"
using namespace std;

int main()
{
	Goblin goblin;
	Monster* mainGoblin = &goblin;
	MonsterManager mainGoblinSpawn(mainGoblin);

	Monster* goblin1 = mainGoblinSpawn.monsterSpawn();
	Monster* goblin2 = mainGoblinSpawn.monsterSpawn();

	goblin1->showStatus();
	goblin2->showStatus();
	goblin1->attack();

	Orc orc;
	Monster* mainOrc = &orc;
	MonsterManager mainOrcSpawn(mainOrc);

	Monster* orcArr[10];

	for (int i = 0; i < 10; i++)
	{
		orcArr[i] = mainOrcSpawn.monsterSpawn();
		orcArr[i]->attack();
	}

	orcArr[0]->showStatus();

}
