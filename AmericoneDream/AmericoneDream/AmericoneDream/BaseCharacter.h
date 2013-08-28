#pragma once
#include "movement.h"
class BaseCharacter
{
public:
	BaseCharacter(void);
	~BaseCharacter(void);
	void Init();
	void Update(float dt);
	Movement controls;
	Vector2* position;
	float speed;
	float damage;
	float health;
};

