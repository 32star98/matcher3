#pragma once
#include "unit.h"
class startpoint :
	public unit
{
public:
	int* target;		//待匹配字符串
	int  ans = 0;		//结果存储 0无结果 1 成功 -1 失败
	startpoint();
	~startpoint();
	virtual void run(int point, int type);
	virtual void error(int type);

};

