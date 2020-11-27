#ifndef PLAYER_HEADER
#define PLAYER_HEADER

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

	//ioput function
	int getHealth() { return Health; }
	int getArk() { return Ark; }
	int getDef() { return Def; }

	void setHealth(int Health) { this->Health = Health; }
	void setArk(int Ark) { this->Ark = Ark; }
	void setDef(int Def) { this->Def = Def; }
	
	void hi() //print player info
	{
		cout << "플레이어(체력:" << Health << " 공격력:" << Ark << " 방어력:" << Def << ") 생성" << endl;
	}
	
};

#endif
