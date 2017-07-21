#include "stdafx.h"
#include "loophead.h"


loophead::loophead()
{
}


loophead::~loophead()
{
}

void loophead::run(int point, int type)
{
	this->point = point;
	*loopendpointer = 0;
	loopingrun(point, type);
}

void loophead::loopingrun(int point, int type)
{
	next->run(point, type);
}

void loophead::error(int type)
{
	next->error(type);
}
