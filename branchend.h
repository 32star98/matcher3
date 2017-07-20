#pragma once
#include "unit.h"
class branchend :
	public unit
{
public:
	branchend();
	~branchend();
	virtual void run(int point, int type);
	virtual void error(int type);
};

