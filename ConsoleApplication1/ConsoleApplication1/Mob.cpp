#include "Mob.h"
#include <iostream>
Mob::Mob(Vector2 _pos, float maxHP, float currentHP, Vector2 _u) : Entity(pos), Alive(getMaxHP(), getCurrentHP()), AMovable(u,speed)
{
	std::cout << "Mob just created at x = " << _pos.getX() << " and y = " << _pos.getY() << " with " << maxHP << " HP." << "with direction x = " << _u.getX() << " and direction y = " << _u.getY() << std::endl;
}
void Mob::takeDamage(float damage) 
{
	Alive::takeDamage(damage);
	if (getCurrentHP()<=0){
		std::cout << "Mob just died" << std::endl;
	}
}
void Mob::move(Vector2 _u) 
{
	AMovable::move(_u);
	std::cout << "Mob just moved to x = " << _u.getX() << " and y = " << _u.getY() << std::endl;
}