#include "stdafx.h"
#include "judge1.h"


judge1::judge1()
{
}


judge1::~judge1()
{
	if (str != 0) {
		delete(str);
	}
}

void judge1::run(int point, int type)
{
	startpoint* p = dynamic_cast<startpoint*>(sou);
	int len = strlen(p->target);
	int i;
	if (p&&len) {
		for (i = 0;i < len;i++) {
			if (p->target[point + i] != str[i]) {
				next->error(type);
			}
		}
		next->run(point + len, type);
	}
	else {
		error(-1);						//应当抛出异常
	}
}

void judge1::error(int type)
{
	next->error(type);
}

int judge1::strlen(int * str)
{
	int i;
	for (i = 0;i < maxlen;i++) {
		if (str[i] == '\0') {
			return i;
		}
	}
	return 0;
}

int judge1::strlen(char * str)
{
	int i;
	for (i = 0;i < maxlen;i++) {
		if (str[i] == '\0') {
			return i;
		}
	}
	return 0;
}
