#pragma once
#include "Windows.h"

struct CursorManager
{
	void Initial(HANDLE hOut);
	void GotoXY(HANDLE hOut, int x, int y);
	void ClearScreen();
};
