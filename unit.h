#pragma once
/*******************************
注意，\x匹配序列需要转义，（x求反）
需要提前定义转义字符表
非判断存储于分支终点
*******************************/
class unit
{
public:
	unit* next=0;
	unit* sou;
	bool nextfreeable = true;		//防止重复释放，主要为分支使用
	//long int mask = 0;				//上层分支地址（仅用作识别）
	virtual void run(int point,
				int type) = 0;	//point指示操作点，type指示操作方式：((1末分支)+(2末循环)) -1,出现异常
	virtual void error(int type) = 0;
	void insert(unit* extra);
	void add(unit* nex);
	virtual void end_nums_test();	//分支数量测试，brancher构造末段使用(在branch_.h中重载)
	unit();
	virtual ~unit();
};