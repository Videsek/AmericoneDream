#pragma once
#include "gameobject.h"

class Player :
	public GameObject
{
public:
	Player(void);
	~Player(void);
	void Init();
	void Update(float dt);
	void Input(SDL_Event event);
	void Draw();
private:
	int i_Lives;
	int i_Score;
	bool b_isBIg;
	bool b_canJump;
};
