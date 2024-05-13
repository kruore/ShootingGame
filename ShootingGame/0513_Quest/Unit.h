#pragma once


enum class ENEMY_TYPE
{
	NONE,A,B,C,D
};
struct Pos
{
	int X;
	int Y;
};

struct Player
{
	int hp;
	int atk;
	Pos pos;
	void Initial();
};

struct Enemy
{
	int hp;
	int atk;
	bool isDead;
	ENEMY_TYPE type;
	Pos pos;

	void Initial(int _hp, int _atk, ENEMY_TYPE _type, Pos _pos);
};