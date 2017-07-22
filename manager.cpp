#include "stdafx.h"
#include "manager.h"


manager::manager()
{
}


manager::~manager()
{
}

void manager::init(const char * sou)
{
	this->sou = (char*)sou;
	root = new startpoint();
	root->ans = 0;
	state0();
}

int manager::state0()
{

	return 0;
}
