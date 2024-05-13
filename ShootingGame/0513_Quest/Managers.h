#pragma once
#include "CursorManager.h"
#include "SceneManager.h"
#include "TimeManager.h"
#include "Utills.h"
#include "Windows.h"
#include "InputManager.h"
#include "UnitManager.h"

struct Managers
{
	CursorManager Cursor;
	SceneManager Scene;
	TimeManager Time;
	InputManager Input;
	UnitManager Unit;

	void Initial(HANDLE hOut);
};

