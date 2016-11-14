#include "Tools.h"


BOOL Tools::setCursorToPosition(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
BOOL Tools::setCursorToPosition(std::vector<int> playerCurCoord)
{
	COORD c;
	c.X = playerCurCoord.at(0);
	c.Y = playerCurCoord.at(1);
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void Tools::clearWord() {
	inputWord = "";
}
std::string Tools::getInputWord() {
	return inputWord;
}
void Tools::setInputWord(std::string newWord) {
	inputWord = newWord;
}

bool Tools::keyCheck() {
	if (letter == 72 || letter == 75 || letter == 80 || letter == 77 || letter == 224) {
		letter = NULL;

		return false;
	}
	else if (letter == 8) {
		if (inputWord.empty() == true) {
			clearWord();
			letter = NULL;
		}
		else inputWord.pop_back();
	}
	else if (timeCount == 1) {
		letter = NULL;
		return true;
	}
	else return true;
}

void Tools::printWord() {
	if (_kbhit() == true) {
		letter = _getch();
		if (keyCheck() == true) {
			inputWord += letter;
			letter = NULL;
		}
	}
	setCursorToPosition(100, 41);
	std::cout << "Input word: " << inputWord;
}



void Tools::SetWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle 
	SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size 
	SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size 
}
