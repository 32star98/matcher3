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
	int to;		//from<to ʱ��Ϊ��ָ��״̬(0,-1)�����ַ�(����cmds����(�ֶ�����))

	virtual void run(int point, int type);
	virtual void error(int type);
};

