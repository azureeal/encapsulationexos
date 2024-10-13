#include "Vector2.h"
#include <iostream>
Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}
float Vector2::getX() {
	return x;
}
float Vector2::getY() {
	return y;
}
void Vector2::set(float _x, float _y) {
	x = _x;
	y = _y;
}
