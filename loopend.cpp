#include "stdafx.h"
#include "loopend.h"


loopend::loopend()
{
}


loopend::~loopend()
{
}

void loopend::setloop(loophead * head, int prefer, int min, int max = 0)
{
	head->loopendpointer = &counter;
	this->prefer = prefer;
	this->min = min;
	this->max = max;
}

void loopend::run(int point, int type)
{
	counter++;
	if (counter < min) {
		from->run(point, type);
		return;
	}
	if (counter == max) {
		next->run(point, type);
		return;
	}
	if (prefer) {
		from->run(point, type);
	}
	else {
		next->run(point, type);
	}
	return;
}

void loopend::error(int type)
{
	if (min == 0) {
		next->run(from->point, type & 1);
	}
	else {
		next->error(type);
	}
}
