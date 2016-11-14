#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "Player.h"
#include "Action.h"
#include "Animation.h"

class Tools {
public:

	int timeCount = 0;
	int letter;
	std::string inputWord = "";
	std::string simonWord;
	
	BOOL setCursorToPosition(int x, int y);
	BOOL setCursorToPosition(std::vector<int> playerCurCoord);
	bool keyCheck();
	
	void printWord();
	void clearWord();
	void SetWindow(int Width, int Height);
	std::string getInputWord();
	void setInputWord(std::string newWord);

private:
};