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
	�������Ի��ƣ���ȷ���ṹ����head������֧�����ź�
				��endȷ�����������¼��ʵ������Ҫheadȷ�Ͻ����
	*******/
	int end_nums_get(int base);		//�ṹ�ڲ�����
};

