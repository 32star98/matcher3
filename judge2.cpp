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
	if (from == 0 && to == -1) {
		run(point + 1, type);
	}
	startpoint* p = dynamic_cast<startpoint*>(sou);
	if (p) {
		int t = p->target[point];
		if (t >= from && t <= to) {
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
