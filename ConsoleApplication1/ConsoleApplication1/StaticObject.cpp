#include "StaticObject.h"
#include <iostream>
StaticObject::StaticObject(Vector2 _pos) : Entity(pos) 
{
	std::cout << "Static Object just created at x = " << _pos.getX() << " and y = " << _pos.getY() << std::endl;
}

