#ifndef ALIVE_H__
#define ALIVE_H__
class Alive
{
private:
	float max_hp;
	float current_hp;
public:
	Alive(float, float);
	virtual float getMaxHP();
	virtual float getCurrentHP();
	virtual void takeDamage(float);
};
#endif
