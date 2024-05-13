#include "InputManager.h"
#include "Windows.h"
#include "iostream"
using namespace std;
void InputManager::GetKeyBoard()
{
	if ((GetAsyncKeyState('A') & 0x8000))
	{
		playPos = PLAYPOS::LEFT;
		return;
	}
	if ((GetAsyncKeyState('D') & 0x8000))
	{
		playPos = PLAYPOS::RIGHT;
		return;
	}
	if ((GetAsyncKeyState('W') & 0x8000))
	{
		playPos = PLAYPOS::UP;
		return;
	}
	if ((GetAsyncKeyState('S') & 0x8000))
	{
		playPos = PLAYPOS::DOWN;
		return;
	}
	if ((GetAsyncKeyState(VK_SPACE) & 0x8001 ))
	{
		cout << "SPACE" << endl;
		return;
	}
}

void InputManager::Initial()
{
	playPos = PLAYPOS::NONE;
}
