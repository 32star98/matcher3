#pragma once
#include "unit.h"
class branchend :
	public unit
{
public:
	int branches = 0;
	int counter = 0;
	int point;			//Ϊ���߼�����
	bool negtive = false;
	bool blocked = true;		//�����Ǻ�
	branchend();
	~branchend();
	virtual void run(int point, int type);
	virtual void error(int type);
};

