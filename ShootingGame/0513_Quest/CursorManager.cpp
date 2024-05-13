#include "CursorManager.h"
#include "Utills.h"

//Init
void CursorManager::Initial(HANDLE hOut)
{
	CONSOLE_CURSOR_INFO stConsoleCursor;
	stConsoleCursor.bVisible = FALSE;
	stConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hOut, &stConsoleCursor);
	ClearScreen();
	GotoXY(hOut, ZEROPOS);
}
//Clear Screen
void CursorManager::ClearScreen()
{
	int x, y;
	DWORD dw;
	FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 100 * 100, { 0, 0 }, &dw);
}
// change cursor position in hOut to x, y
void CursorManager::GotoXY(HANDLE hOut,int x, int y)
{
	COORD stCoord;
	stCoord.X = x;
	stCoord.Y = y;
	SetConsoleCursorPosition(hOut, stCoord);
}

