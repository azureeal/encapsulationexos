#ifndef IATTACKER_H__
#define IATTACKER_H__
#include "Alive.h"
class IAttacker
{
public:
	virtual void Attack(Alive* target) = 0;
};
#endif
