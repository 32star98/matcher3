#include "stdafx.h"
#include "unit.h"


void unit::insert(unit * extra)
{
	extra->next = next;
	next = extra;
}

void unit::add(unit * nex)
{
	next = nex;
	//nex->sou = sou;
}

void unit::end_nums_test()
{
	if (next != 0) {
		next->end_nums_test();
	}
}

unit::unit()
{
}


unit::~unit()
{
	if (nextfreeable && next != 0) {
		delete(next);
	}
}
