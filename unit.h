#pragma once
/*******************************
注意，\x匹配序列需要转义，（x求反）
*******************************/
class unit
{
public:
	unit* next=0;
	unit* sou;
	virtual void run(int point,
				int type) = 0;	//point指示操作点，type指示操作方式：((1末分支)+(2末循环))
	virtual void error() = 0;
	void insert(unit* extra);
	void add(unit* nex);
	unit();
	virtual ~unit();
};