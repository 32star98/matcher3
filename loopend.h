#pragma once
#include "unit.h"
#include"loophead.h"
class loopend :
	public unit
{
public:
	loophead* from;
	int min;
	int max = 0;
	int prefer;				//1̰����2����
	int counter;
	loopend();
	~loopend();
	void setloop(loophead* head, int prefer, int min, int max);
	virtual void run(int point, int type);
	virtual void error(int type);
};

