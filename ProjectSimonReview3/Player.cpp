#include "Player.h"

std::vector<int> Player::getXYPlayer() {
	return playerCurCoord;
}

void Player::setXYPlayer(std::vector<int> newCurCoord) {
	playerCurCoord = newCurCoord;
}