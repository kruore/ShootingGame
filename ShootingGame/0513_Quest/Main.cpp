#include <iostream>
#include "Managers.h"
#include "DataParser.h"

using namespace std;

#pragma region Global Space
#define dfSCREEN_WIDTH		81		// �ܼ� ���� 80ĭ + NULL
#define dfSCREEN_HEIGHT		24		// �ܼ� ���� 24ĭ

static const HANDLE g_hOut = GetStdHandle(STD_OUTPUT_HANDLE);
Managers GM;
DataParser parser;
#pragma endregion

#pragma region Func
void Input();
void Logic();
void Render();
#pragma endregion


int main()
{
	GM.Initial(g_hOut);
	parser.Initial();

	while (1)
	{
		switch (GM.Scene.scenetype)
		{
		case SCENE_TYPE::SCENE_GAMELOAD:
		{
			Input();
			Logic();
			Render();
			Sleep(50);
			break;
		}
		case SCENE_TYPE::SCENE_GAMEPLAY:
		{
			Input();
			Logic();
			Render();
			Sleep(50);
			break;
		}
		case SCENE_TYPE::SCENE_GAMEOVER:
		{
			Input();
			Logic();
			Render();
			Sleep(50);
			break;
		}
		}
	}
}

void Input()
{
	GM.Input.GetKeyBoard();
	if (GM.Unit.player.pos.X < 0 || GM.Unit.player.pos.Y < 0 ||
		GM.Unit.player.pos.X > dfSCREEN_WIDTH || GM.Unit.player.pos.Y > dfSCREEN_HEIGHT)
		return;

	switch (GM.Input.playPos)
	{
	case PLAYPOS::RIGHT:
		if (GM.Unit.player.pos.X == dfSCREEN_WIDTH)
			return;
		GM.Input.playPos = PLAYPOS::NONE;
		GM.Unit.player.pos.X += 1;
		break;
	case PLAYPOS::LEFT:
		if (GM.Unit.player.pos.X == 0)
			return;
		GM.Input.playPos = PLAYPOS::NONE;
		GM.Unit.player.pos.X -= 1;
		break;
	case PLAYPOS::UP:
		if (GM.Unit.player.pos.Y == 0)
			return;
		GM.Input.playPos = PLAYPOS::NONE;
		GM.Unit.player.pos.Y -= 1;
		break;
	case PLAYPOS::DOWN:
		if (GM.Unit.player.pos.Y == dfSCREEN_HEIGHT)
			return;
		GM.Input.playPos = PLAYPOS::NONE;
		GM.Unit.player.pos.Y += 1;
		break;
	}

}
void Logic()
{
	
}
void Render()
{
	// TODO : �̰� ���� clear���� ������ ����
	GM.Cursor.ClearScreen();
	GM.Cursor.GotoXY(g_hOut, GM.Unit.player.pos.X, GM.Unit.player.pos.Y);
	cout << "A" << endl;
}


