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
