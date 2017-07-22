#pragma once
#include "unit.h"
#include"startpoint.h"
class endpoint :
	public unit
{
public:
	endpoint();
	~endpoint();
	startpoint* head;
	virtual void run(int point, int type);
	virtual void error(int type);
};

