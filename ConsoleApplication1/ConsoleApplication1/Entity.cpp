#include "Entity.h"
#include <iostream>
Entity::Entity(Vector2 _pos) : pos(_pos.getX(), _pos.getY())
{

}
float Entity::getPos(Vector2 _pos)
{
	return _pos.getX(), _pos.getY();


}
void Entity::setPos(Vector2 _pos)
{
	pos=_pos;
}