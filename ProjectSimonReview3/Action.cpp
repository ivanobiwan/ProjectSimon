#include "Action.h"

void Action::setAction(int newId, std::string newActionName) {
	ID = newId;
	actionName = newActionName;
}

std::string Action::getAction() {
	return actionName;
}


void Action::actionHandler(std::vector<int> playerCurCoord, std::string &word) {
	Animation animate;
	Tools tool;
	Action playerActions[10];

	playerActions[0].setAction(1, "run");
	playerActions[1].setAction(2, "jump");
	playerActions[2].setAction(3, "fake jump");
	playerActions[3].setAction(4, "crouch");
	playerActions[4].setAction(5, "drop");
	playerActions[5].setAction(6, "punch");

	/*if (word2 == "stand") {
		animate.animatePlayer(playerCurCoord, 1);
		tool.setWord = "";
	}
	else*/ 
	//run 
	if(word == playerActions[0].getAction()) {
		animate.animatePlayer(playerCurCoord, 1);
		word = "";
	}
	//jump
	else if (word == playerActions[1].getAction()) {
		animate.animatePlayer(playerCurCoord, 2);
		word = "";
	}
	//fake jump
	else if (word == playerActions[2].getAction()) {
		animate.animatePlayer(playerCurCoord, 3);
		word = "";
	}
	//crouch
	else if (word == playerActions[3].getAction()) {
		animate.animatePlayer(playerCurCoord, 4);
		word = "";
	}
	//drop
	else if (word == playerActions[4].getAction()) {
		animate.animatePlayer(playerCurCoord, 5);
		word = "";
	}
	//punch
	else if (word == playerActions[5].getAction()) {
		animate.animatePlayer(playerCurCoord, 6);
		word = "";
	}
	else {
		animate.printStanding(playerCurCoord);
	}
}