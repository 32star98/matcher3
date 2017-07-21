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
	数量测试机制：在确定结构后由head遍历分支发出信号
				由end确定并将结果记录（实际上需要head确认结果）
	*******/
	int end_nums_get(int base);		//结构内部函数
};

