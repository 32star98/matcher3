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

unit::unit()
{
}


unit::~unit()
{
}
