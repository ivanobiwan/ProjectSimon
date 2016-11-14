#include <iostream>
#include <fstream>
#include <Windows.h>
#include <String>
using namespace std;

void GoToXY(int x, int y)
{
	COORD p;
	p.X = x;
	p.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int main()
{
	std::ifstream inFile;

	//inFile.open("goku.txt");
	inFile.open("running.anim");
	inFile.is_open();

	//char lineString[128];
	std::string lineString[8][8];

	//while (!inFile.eof())
	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			//inFile.getline(lineString, 128);
			//std::cout << lineString << std::endl;
			char readInCharacters[300];
			inFile.getline(readInCharacters, 300);
			lineString[i][k] = readInCharacters;
		}
	}
	int currentSpriteFrame = 0;
	int xPosition = 0;
	int yPosition = 0;
	while (true)
	{
		GoToXY(xPosition, yPosition);
		std::cout << lineString[currentSpriteFrame][0] << std::endl;

		GoToXY(xPosition, yPosition + 1);
		std::cout << lineString[currentSpriteFrame][1] << std::endl;

		GoToXY(xPosition, yPosition + 2);
		std::cout << lineString[currentSpriteFrame][2] << std::endl;

		GoToXY(xPosition, yPosition + 3);
		std::cout << lineString[currentSpriteFrame][3] << std::endl;

		GoToXY(xPosition, yPosition + 4);
		std::cout << lineString[currentSpriteFrame][4] << std::endl;

		GoToXY(xPosition, yPosition + 5);
		std::cout << lineString[currentSpriteFrame][5] << std::endl;

		GoToXY(xPosition, yPosition + 6);
		std::cout << lineString[currentSpriteFrame][6] << std::endl;

		GoToXY(xPosition, yPosition + 7);
		std::cout << lineString[currentSpriteFrame][7] << std::endl;

		if (GetAsyncKeyState(VK_LEFT))
		{
			xPosition -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			xPosition += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			yPosition -= 1;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			yPosition += 1;
		}
		Sleep(100);
		system("cls");
		currentSpriteFrame += 1;
		currentSpriteFrame = currentSpriteFrame % 6;
	}
	system("PAUSE");

	return 0;
}