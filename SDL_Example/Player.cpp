#include "Player.h"
#include "GameWOrld.h"

Player::Player(void)
{
}

Player::~Player(void)
{
}
void Player::Init()
{
	i_Lives = 3;
	i_Score = 0;
	i_height = 50;
	i_width = 50;
	f_halfHeight = (float)i_height/2;
	f_halfWidth = (float)i_width/2;
	b_isBIg = false;
	f_maxSpeed = 5;
	f_maxDropSpeed = 5;
	gli_Image = LoadImage("TankBase.png");
	v_mPosition = Vec2(2*GRIDSIZE, 10*GRIDSIZE);
	v_speed = Vec2(0,0);
}
void Player::Update(float dt)
{
	v_mPosition += v_speed *dt;
	if(v_mPosition.y >10 *GRIDSIZE)
		v_mPosition.y = 10 *GRIDSIZE;
	if(v_mPosition.x < 0)
		v_mPosition.x += 800;
	if(v_mPosition.x > 800)
		v_mPosition.x -= 800;
}
void Player::Input(SDL_Event event)
{
	switch(event.type)
	{
	case SDL_KEYDOWN:
		{
			switch( event.key.keysym.sym )
			{
			case SDLK_a:
				v_speed.x = -200.0f;
				break;
			case SDLK_d:
				v_speed.x = 200.0f;
				break;
			case SDLK_SPACE:
				b_canJump =false;
				v_speed.y = -500.0f;
				break;
			default:
				break;
			}
		}
		break;
	case SDL_KEYUP:
		{
			switch( event.key.keysym.sym )
			{				
			case SDLK_a:
			case SDLK_d:
				v_speed.x = 0.0f;
				break;
			case SDLK_SPACE:
				b_canJump = true;
  				v_speed.y = 500.0f;
				break;
			default:
				break;
			}
		}
		break;
	}
}
void Player::Draw()
{
	DrawImage( gli_Image, Color(1, 1, 1), v_mPosition.x, v_mPosition.y, 50, 50 );
}
