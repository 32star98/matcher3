#pragma once
/*******************************
ע�⣬\xƥ��������Ҫת�壬��x�󷴣�
*******************************/
class unit
{
public:
	unit* next=0;
	unit* sou;
	virtual void run(int point,
				int type) = 0;	//pointָʾ�����㣬typeָʾ������ʽ��((1ĩ��֧)+(2ĩѭ��))
	virtual void error() = 0;
	void insert(unit* extra);
	void add(unit* nex);
	unit();
	virtual ~unit();
};