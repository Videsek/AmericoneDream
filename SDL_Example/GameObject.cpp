#include "GameObject.h"

GameObject::GameObject(void)
{
}

GameObject::~GameObject(void)
{
}
Vec2 GameObject::GetClosestPoint(Vec2 Point)
{
	Vec2 closestPoint;
	//horrible collision blame ED
	if(Point.x < GetLeftCollision())
	{
		if(Point.y > GetBottomCollision())
			closestPoint = Vec2(GetLeftCollision(),GetBottomCollision());
		else if(Point.y < GetTopCollision())
			closestPoint = Vec2(GetLeftCollision(),GetTopCollision());
		else
			closestPoint = Vec2(GetLeftCollision(),Point.y);
	}
	else if(Point.x > GetRightCollision())
	{
		if(Point.y > GetBottomCollision())
			closestPoint = Vec2(GetRightCollision(),GetBottomCollision());
		else if(Point.y < GetTopCollision())
			closestPoint = Vec2(GetRightCollision(),GetTopCollision());
		else
			closestPoint = Vec2(GetRightCollision(),Point.y);
	}
	else
	{
		if(Point.y > GetBottomCollision())
			closestPoint = Vec2(Point.x,GetBottomCollision());
		else if(Point.y < GetTopCollision())
			closestPoint = Vec2(Point.x,GetTopCollision());
		else
			closestPoint = Point;
	}
	return closestPoint;
}

bool GameObject::DidWeCollide(Vec2 Point)
{
	return false;
}