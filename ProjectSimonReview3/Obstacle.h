#include "Tools.h"

class Obstacle {
public:
	std::string obstacleName;
	std::vector<std::string> obstacleString;
	void setObstacleString();
	COORD obstacleCurCoord;
private:
	int ID;
};