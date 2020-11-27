#pragma once
#include <iostream>

using namespace std;

class Player
{
	int Health;
	int Ark;
	int Def;

public:
	Player(int hp, int ark, int def) : Health(hp), Ark(ark), Def(def)
	{
		
	}

	~Player()
	{

	}
	
	void hi()
	{
		cout << "플레이어(체력:" << Health << " 공격력:" << Ark << " 방어력:" << Def << ") 생성" << endl;
	}
	
};
