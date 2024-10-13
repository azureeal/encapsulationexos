#ifndef MOB_H__
#define MOB_H__
#include "Alive.h"
#include "Entity.h"
#include "AMovable.h"
class Mob: Entity, Alive, AMovable
{
public:
	Mob(Vector2, float, float, Vector2);
	void takeDamage(float) override;
	void move(Vector2) override;
};
#endif
