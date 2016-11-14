#include "Level.h"

void Level::setLevelLayout() {
	std::ifstream inFile;
	if (ID == 1) {
		inFile.open("Levels/Level-1.txt");
	}
	inFile.is_open();
	char readInCharacters[300];
	while (!inFile.eof()) {
		inFile.getline(readInCharacters, 300);
		levelObstacle.push_back(readInCharacters);
	}
	inFile.close();
}
//Level getLevelLayout() {
//	
//}

void Level::drawLevel()
{
	//cout << coordChars[i][x];
	Tools tool;
	std::string s;
	std::ifstream istream("Levels/demolevel.txt");
	tool.setCursorToPosition(0, 39);
	while (getline(istream, s)) {
		std::cout << s << std::endl;
	}
	istream.close();
}
