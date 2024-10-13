#ifndef AMOVABLE_H__
#define AMOVABLE_H__
#include "Vector2.h"
class AMovable
{
public:
	Vector2 u;
	float speed;
	AMovable(Vector2, float);
	virtual void setDirection(Vector2);
	virtual void setSpeed(float);
	virtual void move(Vector2) = 0;
};
#endif

