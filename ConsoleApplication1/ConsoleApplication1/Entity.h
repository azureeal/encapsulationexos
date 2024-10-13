#include "Vector2.h"
#ifndef ENTITY_H__
#define ENTITY_H__

class Entity
{
protected:
	Vector2 pos;
public:
	Entity(Vector2);
	virtual void setPos(Vector2);
	virtual float getPos(Vector2);

};
#endif

