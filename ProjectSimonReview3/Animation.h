#pragma once

#include <vector>
#include <fstream>
#include "Tools.h"
#include "Level.h"

class Animation {
public:
	void animatePlayer(std::vector<int> playerCurCoord, int animationID);
	void printStanding(std::vector<int> playerCurCoord);
private:
	int animationId;
	std::string animationName;
};
