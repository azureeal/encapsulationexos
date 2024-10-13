#ifndef VECTOR2_H__
#define VECTOR2_H__
class Vector2
{
private:
	float x;
	float y;
public:
	Vector2(float _x, float _y);
	float getX();
	float getY();
	void set(float x, float y);

};
#endif
