#ifndef PLAYER_H__
#define PLAYER_H__
#include "Alive.h"
#include "Entity.h"
#include "AMovable.h"
#include "IAttacker.h"
class Player : Entity, Alive, AMovable, IAttacker
{
public:
	Player(Vector2, float, float, Vector2);
	void takeDamage(float) override;
	void move(Vector2) override;
	void Attack(Alive* target) override;
};
#endif
