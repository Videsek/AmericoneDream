#include "Enemy.h"
#include "GameWOrld.h"

Enemy::Enemy(void)
{
}

Enemy::~Enemy(void)
{
}

void Enemy::Init()
{
	gli_Image = LoadImage("Circle.bmp");
	v_mPosition = Vec2(10*GRIDSIZE, 10*GRIDSIZE);
	v_speed = Vec2(0,0);
	i_height = 50;
	i_width = 50;
	f_halfHeight = (float)i_height/2;
	f_halfWidth = (float)i_width/2;
}

void Enemy::Update(float dt)
{
	v_mPosition.x += 50 *dt;
	
	if(v_mPosition.x < 0)
		v_mPosition.x += 800;
	if(v_mPosition.x > 800)
		v_mPosition.x -= 800;
}

void Enemy::Draw()
{
	DrawImage( gli_Image, Color(1, 0, 1), v_mPosition.x, v_mPosition.y, 50, 50 );
}

