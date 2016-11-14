#pragma once

#include "Tools.h"
#include "Animation.h"
#include "Player.h"

class Action{
public: 

	void actionHandler(std::vector<int> playerCurCoord, std::string &word);

	void setAction(int id, std::string actionName);
	std::string getAction();

private:

	int ID;

	std::string actionName;
};
