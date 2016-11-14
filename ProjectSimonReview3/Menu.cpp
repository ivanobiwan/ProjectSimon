#include "Menu.h"


int getMenuPosition(int menuCurrentPosition) {
	if (GetKeyState(0x26) == TRUE && menuCurrentPosition != 1) { // up
		menuCurrentPosition--;
	}
	else if (GetKeyState(0x28) == TRUE && menuCurrentPosition <= 2) { // down
		menuCurrentPosition++;
	}
	else return menuCurrentPosition;
}
int menuHandler(int menuCurrentPosition) {

	if (getMenuPosition(menuCurrentPosition) == 1) {
		system("cls");
		std::cout << "Welcome to Project: Simon!" << std::endl;
		std::cout << "GAME" << std::endl;
		std::cout << "EXIT" << std::endl;
		return 3;
	}
	else if (getMenuPosition(menuCurrentPosition) == 2) {
		system("cls");
		std::cout << "Welcome to Project: Simon!" << std::endl;
		std::cout << "GAME" << std::endl;
		std::cout << "EXIT" << std::endl;
		return 3;
	}
	else if (GetAsyncKeyState(0x0D))
	{
		if (getMenuPosition(menuCurrentPosition) == 1)
		{
			return 1;
		}
		else if (getMenuPosition(menuCurrentPosition) == 2)
		{
			return 2;
		}
	}
}