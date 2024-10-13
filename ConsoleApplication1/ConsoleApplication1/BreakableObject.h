#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBEJCT_H__
#include "Entity.h"
#include "Alive.h"
class BreakableObject: Entity, Alive
{
public:
	BreakableObject(Vector2, float, float);
	void takeDamage(float) override;
};
#endif
