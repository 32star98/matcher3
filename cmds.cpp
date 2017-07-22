#include "stdafx.h"
#include "cmds.h"


cmds::cmds()
{
}

cmds cmds::instance()
{
	if (ins) {
		return *ins;
	}
	ins = new cmds();
	return cmds();
}

int cmds::strlen(char * ins)
{
	int i;
	for (i = 0;i < maxlen;i++) {
		if (ins[i] == 0)
			break;
	}
	return i;
}

int cmds::strlen(int * ins)
{
	int i;
	for (i = 0;i < maxlen;i++) {
		if (ins[i] == 0)
			break;
	}
	return i;
}


cmds::~cmds()
{
}
