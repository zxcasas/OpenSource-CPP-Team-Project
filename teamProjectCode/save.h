#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
const string SAVE_FILENAME = "saveData.txt";

class saveFile {
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

	void writingFile(int& level, int& hp)
	{
		string sdata = to_string(level) + "," + to_string(hp);

		writeFile.open(SAVE_FILENAME, 0);
		if (!writeFile.is_open())
			cout << "open error [writeFile]" << endl;
		else
			writeFile << sdata;
		writeFile.close();
	}

	void readingFile(int& level, int& hp)
	{
		readFile.open(SAVE_FILENAME, 0);
		if (!readFile.is_open())
			cout << "open error [readFile]" << endl;
		string text;
		while (!readFile.eof())
		{
			readFile >> text;
			stringToInt(text, level, hp);
		}
		readFile.close();
	}

	void stringToInt(string& text, int& lev, int& hp)
	{
		int finder = text.find(",");			//0,0 => '0'[0] + ','[1] + '0'[2]
		string level = "0", hps = "0";
		for (int i = 0; i < finder; i++)
		{
			level.resize(i + 1);
			level[i] = text[i];
		}
		for (int i = finder + 1; i < (int)text.size(); i++)
		{
			hps.resize(i - finder);
			hps[i - (finder + 1)] = text[i];
		}
		lev = stoi(level);
		hp = stoi(hps);
	}
};
saveFile* saveFile::saveFileInstance = NULL;
