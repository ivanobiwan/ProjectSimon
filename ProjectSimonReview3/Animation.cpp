#include "Animation.h"

void Animation::animatePlayer(std::vector<int> playerCurCoord, int animationID) {

	Tools tool;
	Level level;

	std::ifstream inFile;

	if (animationID == 1) {
		inFile.open("Animations/running.anim");
	}
	else if (animationID == 2) {
		inFile.open("Animations/jumping.anim");
	}
	else if (animationID == 3) {
		inFile.open("Animations/fake_jumping.anim");
	}
	else if (animationID == 4) {
		inFile.open("Animations/crouching.anim");
	}
	else if (animationID == 5) {
		inFile.open("Animations/dropping.anim");
	}
	else if (animationID == 6) {
		inFile.open("Animations/punching.anim");
	}
	inFile.is_open();

	std::string lineString[8][8];

	//while (!inFile.eof())
	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			//inFile.getline(lineString, 128);
			//std::cout << lineString << std::endl;
			char readInCharacters[300];
			inFile.getline(readInCharacters, 300);
			lineString[i][k] = readInCharacters;
		}
	}

	int currentSpriteFrame = 0;
	for (int x = 0; x <= 6; x++) {

		system("cls");
		level.drawLevel();

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1));
		std::cout << lineString[currentSpriteFrame][0] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 1);
		std::cout << lineString[currentSpriteFrame][1] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 2);
		std::cout << lineString[currentSpriteFrame][2] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 3);
		std::cout << lineString[currentSpriteFrame][3] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 4);
		std::cout << lineString[currentSpriteFrame][4] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 5);
		std::cout << lineString[currentSpriteFrame][5] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 6);
		std::cout << lineString[currentSpriteFrame][6] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 7);
		std::cout << lineString[currentSpriteFrame][7] << std::endl;

		Sleep(100);
		currentSpriteFrame += 1;
		currentSpriteFrame = currentSpriteFrame % 6;
	}
}
void Animation::printStanding(std::vector<int> playerCurCoord) {
	Tools tool;
	std::string sPlayer;
	std::ifstream inFile;
	inFile.open("Animations/standing.anim");
	inFile.is_open();

	std::string lineString[8][8];

	//while (!inFile.eof())
	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			//inFile.getline(lineString, 128);
			//std::cout << lineString << std::endl;
			char readInCharacters[300];
			inFile.getline(readInCharacters, 300);
			lineString[i][k] = readInCharacters;
		}
	}

	int currentSpriteFrame = 0;
	for (int x = 0; x <= 6; x++) {

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1));
		std::cout << lineString[currentSpriteFrame][0] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 1);
		std::cout << lineString[currentSpriteFrame][1] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 2);
		std::cout << lineString[currentSpriteFrame][2] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 3);
		std::cout << lineString[currentSpriteFrame][3] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 4);
		std::cout << lineString[currentSpriteFrame][4] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 5);
		std::cout << lineString[currentSpriteFrame][5] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 6);
		std::cout << lineString[currentSpriteFrame][6] << std::endl;

		tool.setCursorToPosition(playerCurCoord.at(0), playerCurCoord.at(1) + 7);
		std::cout << lineString[currentSpriteFrame][7] << std::endl;
	}

}

