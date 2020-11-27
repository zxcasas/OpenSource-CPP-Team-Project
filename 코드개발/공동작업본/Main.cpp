#include "Monster.h"
#include "Spawner.h"
#include "Bear.h"
#include "DarkElf.h"
#include "Player.h"

#include <iostream>

using namespace std;


int main(int argc, char const* argv[])

{
	Monster* bearPrototype = new Bear(1, 2, 3);

	Spawner* bearSpawner = new Spawner(bearPrototype);
	
	Monster* bear = bearSpawner->spawnMonster();

	bear->hi();
	bear->MobAttack();

	Player* player1 = new Player(1, 2, 3);

	player1->hi();
}
