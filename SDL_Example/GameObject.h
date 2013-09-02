#pragma once
#include "BaseEntiry.h"
#include "source/render.h"
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_opengl.h"
class GameObject : public BaseEntiry
{
public:
	GameObject(void);
	//~GameObject(void);
	virtual ~GameObject(void);
	void Collision ();
	void Update(float dt);

	//box collision information
	int GetWidth(){return i_width;}
	int GetHeight(){return i_height;}
	float GetTopCollision(){return v_mPosition.y - f_halfHeight;}
	float GetBottomCollision(){return v_mPosition.y + f_halfHeight;}
	float GetLeftCollision(){return v_mPosition.x - f_halfWidth;}
	float GetRightCollision(){return v_mPosition.x + f_halfWidth;}
	Vec2 GetClosestPoint(Vec2 Point);
	bool DidWeCollide(Vec2 Point);
protected:
	Vec2 v_speed;
	float f_maxSpeed;
	float f_gravity;
	float f_maxDropSpeed;
	GLuint gli_Image;
	int i_width;
	int i_height;
	float f_halfWidth;
	float f_halfHeight;

};
