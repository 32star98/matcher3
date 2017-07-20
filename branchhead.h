#pragma once
#include "unit.h"
class branchhead :
	public unit
{
public:
	branchhead();
	~branchhead();
	virtual void run(int point, int type);
	virtual void error(int type);
	branchhead* extra = 0;
	void add(branchhead* newer);
};

