#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"

using namespace std;
const string SAVE_FILENAME = "saveData.txt";

class saveFile 
{
private:
	static saveFile* saveFileInstance;

	ifstream readFile;
	ofstream writeFile;

	saveFile() { cout << "saveFile is created" << endl; }
	saveFile(const saveFile& obj) = delete;
	saveFile& operator = (const saveFile& obj) = delete;

public:
	static saveFile* callSaveFile()
	{
		if (saveFileInstance == NULL)
			saveFileInstance = new saveFile();
		return saveFileInstance;
	}

	void writingFile(Player& playerInfo)
	{
		string wdata = to_string(playerInfo.getHealth()) + ";" + to_string(playerInfo.getArk()) + ";" + to_string(playerInfo.getDef()) + ";";

		writeFile.open(SAVE_FILENAME, 0);
		if (!writeFile.is_open())
			cout << "open error [writeFile]" << endl;
		else
			writeFile << wdata;
		writeFile.close();
	}

	void readingFile(Player& playerInfo)
	{
		readFile.open(SAVE_FILENAME, 0);
		if (!readFile.is_open())
			cout << "open error [readFile]" << endl;
		string rdata;
		while (!readFile.eof())
		{
			readFile >> rdata;
			stringToInt(rdata, playerInfo);
		}
		readFile.close();
	}

	void stringToInt(string& rdata, Player& playerInfo)
	{
		string Info;
		int i = 0, findCount = 0;
		while (i < (int)rdata.size())
		{
			int finder = rdata.find(";", i);	
			findCount++;							

			Info.resize(finder - i);			
			int c = 0;
			for (; i < finder; i++) 
			{ 
				Info[c] = rdata[i]; 
				c++;
			}	
			i += 1;
			if (findCount == 1) { playerInfo.setHealth(stoi(Info)); }
			if (findCount == 2) { playerInfo.setArk(stoi(Info)); }
			if (findCount == 3) { playerInfo.setDef(stoi(Info)); }
		}
	}
};

saveFile* saveFile::saveFileInstance = NULL;
