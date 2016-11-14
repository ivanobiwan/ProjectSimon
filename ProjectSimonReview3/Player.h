#pragma once

#include <vector>

class Player {
private:
public: 

	std::string player;
	std::vector<int> playerCurCoord = {100,30};
	
	void Player::setXYPlayer(std::vector<int> newCurCoord);
	std::vector<int> getXYPlayer();
};