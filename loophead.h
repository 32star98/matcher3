#pragma once
#include "unit.h"
/*******************
只需初始化一次
*******************/
class loophead :
	public unit
{
public:
	loophead();
	~loophead();
	int point;
	int* loopendpointer;			//终点计数器指针
	virtual void run(int point, int type);
	void loopingrun(int point, int type);
	virtual void error(int type);
};

