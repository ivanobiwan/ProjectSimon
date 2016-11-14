#pragma once
#include <fstream>
#include "Tools.h"

class Level {
public:
	void drawLevel();
	std::string levelName;
	std::vector<std::string> levelObstacle;
	void setLevelLayout();
	void Level::setAllLayouts();
	int ID;
};