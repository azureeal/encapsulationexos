#include "BreakableObject.h"
#include <iostream>
BreakableObject::BreakableObject(Vector2 _pos, float maxHP, float currentHP) : Entity(pos), Alive(getMaxHP(), getCurrentHP())
{
	std::cout << "Breakable Object just created at x = " << _pos.getX() << " and y = " << _pos.getY() << " with " << maxHP << " HP." << std::endl;
}
void BreakableObject::takeDamage(float damage)
{
	Alive::takeDamage(damage);
	if (getCurrentHP() <= 0) {
		std::cout << "Breakable Object just broke" << std::endl;
	}
}