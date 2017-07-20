#include "stdafx.h"
#include "judge2.h"


judge2::judge2()
{
}


judge2::~judge2()
{
}

void judge2::run(int point, int type)
{
	startpoint* p = dynamic_cast<startpoint*>(sou);
	if (p) {
		if (p->target[point] == t) {
			next->run(point + 1, type);
		}
	}
	else {
		error(-1);						//应该抛出异常
	}
}

void judge2::error(int type)
{
	next->error(type);
}
