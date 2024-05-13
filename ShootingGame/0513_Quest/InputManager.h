#pragma once
enum class PLAYPOS
{
	NONE,
	UP,
	DOWN,
	LEFT,
	RIGHT
};
struct InputManager
{
	PLAYPOS playPos = PLAYPOS::NONE;
	void GetKeyBoard();
	void Initial();
};