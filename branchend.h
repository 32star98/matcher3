#pragma once
#include "unit.h"
class branchend :
	public unit
{
public:
	int branches = 0;
	int counter = 0;
	int point;			//为否定逻辑服务
	bool negtive = false;
	bool blocked = true;		//阻塞记号
	branchend();
	~branchend();
	virtual void run(int point, int type);
	virtual void error(int type);
};

