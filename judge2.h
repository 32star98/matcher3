#pragma once
#include "unit.h"
#include"startpoint.h"
#include"cmds.h"
class judge2 :
	public unit
{
public:
	judge2();
	~judge2();
	int from;
	int to;		//from<to 时认为是指令状态(0,-1)任意字符(依据cmds定义(手动更新))

	virtual void run(int point, int type);
	virtual void error(int type);
};

