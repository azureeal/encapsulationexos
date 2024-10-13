#include "Alive.h"
#include <iostream>
Alive::Alive(float maxHP, float currentHP) : max_hp(maxHP), current_hp(currentHP) 
{

}
float Alive::getMaxHP() 
{
	return max_hp;
}
float Alive::getCurrentHP() 
{
	return current_hp;
}
void Alive::takeDamage(float damage)
{
	current_hp -= damage;
}
