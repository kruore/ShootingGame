#pragma once

enum class SCENE_TYPE
{
	SCENE_GAMELOAD,
	SCENE_GAMEPLAY,
	SCENE_GAMEOVER,
};

struct SceneManager
{
	SCENE_TYPE scenetype;
	void MakeLoad();
};

