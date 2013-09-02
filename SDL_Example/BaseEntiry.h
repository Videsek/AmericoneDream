#pragma once
#include "source/math.h"

class BaseEntiry
{
public:
	BaseEntiry(void);
	//~BaseEntiry(void);
	virtual ~BaseEntiry(void);
	Vec2 Get(){return v_mPosition;}
	void Set(Vec2 newPos){v_mPosition = newPos;}
protected:
	Vec2 v_mPosition;
};
