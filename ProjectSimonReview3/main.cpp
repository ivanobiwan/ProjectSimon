#include <iostream>
#include <Windows.h>

#include "Level.h"
#include "Obstacle.h"
#include "Action.h"
#include "Player.h"
#include "Tools.h"
#include "Menu.h"
#include "Animation.h"

enum gameState
{
	MAIN_MENU, GAME, LOADING, QUIT
};

enum currentLevel {
	LEVEL_01, LEVEL_02, LEVEL_3
};

gameState state = gameState::GAME;

/*-----------------------------------------------------------------*/

void main()
{
	Tools tool;
	Obstacle obstacle[4];
	Level level[4];
	Animation animation;
	Player player;
	Action action;
	
	tool.SetWindow(1920, 1080);

	int menuCurrentPosition = 1;

	while (state != gameState::QUIT) {
		if (state == gameState::MAIN_MENU) {
			/*if (menuHandler(menuCurrentPosition) == 1)
			{
				state = gameState::GAME;
			}
			else if (menuHandler(menuCurrentPosition) == 2)
			{
				state = gameState::QUIT;
			}
			else if (GetAsyncKeyState(0x47))
			{
				state = gameState::GAME;
			}*/
		}
		else if (state == gameState::LOADING) {
			system("cls");
			std::cout << "loading..";
			//load and store obstacles
			std::cout << "\nloading obstacles...";
			obstacle[0].obstacleName = "jumpobstacle";
			obstacle[0].setObstacleString();
			std::cout << "\nobstacles loaded";
			int k = 0;
			//for (std::string i : obstacle[0].obstacleString) {
			//	std::cout << std::endl;
			//	std::cout << obstacle[0].obstacleString.at(k);
			//	k++;
			//}
			// load and store level layout
			std::cout << "\nloading level layout...";
			level[0].ID = 1;
			level[0].setLevelLayout();
			std::cout << "\nlevel layout loaded";
			system("pause");
		}
		else if (state == gameState::GAME) {
			system("cls");
			tool.printWord();
			level[0].drawLevel();
			action.actionHandler(player.playerCurCoord, tool.inputWord);

			if (GetAsyncKeyState(0x1B))
			{
				state = gameState::MAIN_MENU;
			}
		}
	}
	system("cls");
	std::cout << "Bye-Bye!" << std::endl;
	system("pause");
}