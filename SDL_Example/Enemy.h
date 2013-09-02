#pragma once
#include "gameobject.h"

class Enemy :
	public GameObject
{
public:
	Enemy(void);
	~Enemy(void);
	void Init();
	void Update(float dt);
	void Draw();
};
