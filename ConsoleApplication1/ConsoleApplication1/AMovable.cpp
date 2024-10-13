#include "AMovable.h"
#include <iostream>
AMovable::AMovable(Vector2 _u, float _speed) : u(_u), speed(_speed) 
{

}
void AMovable::setDirection(Vector2 u) 
{
	this->u = u;
}
void AMovable::setSpeed(float speed)
{
	this->speed = speed;
}
void AMovable::move(Vector2 u) 
{
	this->u.set(u.getX(), u.getY());
}