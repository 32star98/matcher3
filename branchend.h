#pragma once
#include "unit.h"
class branchend :
	public unit
{
public:
	int branches = 0;
	int counter = 0;
	int point;			//Ϊ���߼�����
	bool confirelock = false;
	bool negtive;
	branchend();
	~branchend();
	virtual void run(int point, int type);
	virtual void error(int type);
	virtual void end_nums_test();
};

