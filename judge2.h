#pragma once
#include "unit.h"
#include"startpoint.h"
class judge2 :
	public unit
{
public:
	judge2();
	~judge2();
	int t;		//�洢�ַ�

	virtual void run(int point, int type);
	virtual void error();
};

