#pragma once
#include <stdlib.h>	// For random tint
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_opengl.h"
#include "source/math.h"
#include "source/Render.h"
#include "Player.h"
#include "Enemy.h"


#define GRIDSIZE 50
#define WORLDHEIGHT 800
#define WORLDLENGTH 600
class GameWorld
{
public:
	GameWorld(void);
	~GameWorld(void);
	/*
	needed 
	Player Object
	Enemy Objects
	World Grid
	Collision Control
	Grid Drawing / movement (to keep with the background scroll
	*/

	static bool drawGrid;
	void Init();
	Vec2 asdf;
	void Draw();
	void Update(float dt);
	void GetInput(SDL_Event event);
private:

	void CheckCollision();
	void DrawGrid();

	Player* m_player;
	Enemy* enemies;

};
