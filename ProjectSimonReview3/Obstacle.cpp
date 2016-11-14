#include "Obstacle.h"


void Obstacle::setObstacleString() {
	std::fstream inFile;
	if (obstacleName == "jumpobstacle") {
		inFile.open("jumpobstacle.txt");
	}
	char readInCharacters[300];
	inFile.is_open();
	while (!inFile.eof()) {
		inFile.getline(readInCharacters, 300);
		obstacleString.push_back(readInCharacters);
	}
	inFile.close();
}

//void Obstacle::setObstacleName(Obstacle &obstacle) {
//	
//}