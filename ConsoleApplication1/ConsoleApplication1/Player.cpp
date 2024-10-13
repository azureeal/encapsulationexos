#include "Player.h"
#include <iostream>
Player:: Player(Vector2 _pos, float maxHP, float currentHP, Vector2 _u) : Entity(pos), Alive(getMaxHP(), getCurrentHP()), AMovable(u, speed)
{
	std::cout << "Player just created at x = " << _pos.getX() << " and y = " << _pos.getY() << " with " << maxHP << " HP." << "with direction x = " << _u.getX() << " and direction y = " << _u.getY() << std::endl;
}
void Player::takeDamage(float damage) 
{
	Alive::takeDamage(damage);
	if (getCurrentHP() <= 0) {
		std::cout << "Player just died" << std::endl;
	}
}
void Player::move(Vector2 _u)
{
	AMovable::move(_u);
	std::cout << "Player just moved to x = " << _u.getX() << " and y = " << _u.getY() << std::endl;
}
void Player::Attack(Alive* cible) {
	if (cible) {
		cible->takeDamage(10);  
		std::cout << "Player just attacked." << std::endl;
	}
}