#pragma once
#include "unit.h"
/*******************
ֻ���ʼ��һ��
*******************/
class loophead :
	public unit
{
public:
	loophead();
	~loophead();
	int point;
	int* loopendpointer;			//�յ������ָ��
	virtual void run(int point, int type);
	void loopingrun(int point, int type);
	virtual void error(int type);
};

