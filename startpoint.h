#pragma once
#include "unit.h"
class startpoint :
	public unit
{
public:
	int* target;		//��ƥ���ַ���
	int  ans = 0;		//����洢 0�޽�� 1 �ɹ� -1 ʧ��
	startpoint();
	~startpoint();
	virtual void run(int point, int type);
	virtual void error(int type);

};

