#include "Monster.h"
#include "Spawner.h"
#include "Bear.h"
#include "DarkElf.h"

#include <iostream>

using namespace std;


int main(int argc, char const* argv[])

{
	Monster* bearPrototype = new Bear(1, 2, 3);

	Spawner* bearSpawner = new Spawner(bearPrototype);
	
	Monster* bear = bearSpawner->spawnMonster();

	bear->hi();
	bear->MobAttack();

	Monster* darkelfPrototype = new DarkElf(1, 2, 3);

	Spawner* darkelfSpawner = new Spawner(darkelfPrototype);

	Monster* darkelf = darkelfSpawner->spawnMonster();

	darkelf->hi();
	darkelf->MobAttack();
}
