#pragma once
#include "unit.h"
#include "branchend.h"
class branchhead :
	public unit
{
public:
	branchhead();
	~branchhead();
	branchend* ender = 0;
	virtual void run(int point, int type);
	virtual void error(int type);
	branchhead* extra = 0;
	void add(branchhead* newer);
	void end(branchend* ender);
	/*******
	数量测试机制：直接分配数量
	*******/
	int end_nums_get(int base);		//结构内部函数
};

