#include "stdafx.h"
#include "startpoint.h"


startpoint::startpoint()
{
}


startpoint::~startpoint()
{
	if (target != 0) {
		delete(target);
	}
}

void startpoint::run(int point, int type)
{
	next->run(point, type);
}

void startpoint::error(int type)
{
}
