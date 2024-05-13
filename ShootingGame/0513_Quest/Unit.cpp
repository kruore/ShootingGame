#include "Unit.h"

void Player::Initial()
{
	hp = 100;
	atk = 10;
	pos = Pos { 40,10 };
}

void Enemy::Initial(int _hp, int _atk, ENEMY_TYPE _type,Pos _pos)
{
	hp = _hp;
	atk = _atk;
	isDead = false;
	type = _type;
	pos = _pos;
}
