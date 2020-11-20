#include <iostream>
#include "save.h"

using namespace std;

int main()
{
	saveFile* saveFileSingleton = saveFile::callSaveFile();
	saveFile* saveFileSingleton2 = saveFile::callSaveFile();
	saveFile* saveFileSingleton3 = saveFile::callSaveFile();

	cout << saveFileSingleton << endl;
	cout << saveFileSingleton2 << endl;
	cout << saveFileSingleton3 << endl;

	int level = 0, hp = 0;
	saveFileSingleton->writingFile(level, hp);
	saveFileSingleton->readingFile(level, hp);
	cout << "level: " << level << ", hp: " << hp << endl;

	level = 10, hp = 60;
	saveFileSingleton2->writingFile(level, hp);
	saveFileSingleton2->readingFile(level, hp);
	cout << "level: " << level << ", hp: " << hp << endl;
	
	while (1)
	{
		cout << "level input: ";
		cin >> level;
		cout << "hp input: ";
		cin >> hp;
		saveFileSingleton3->writingFile(level, hp);
		saveFileSingleton3->readingFile(level, hp);
		cout << "level: " << level << ", hp: " << hp << endl;
	}
	
	return 0;
}