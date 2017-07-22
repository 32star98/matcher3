#pragma once
#include"branchend.h"
#include"branchhead.h"
#include"loopend.h"
#include"loophead.h"
#include"startpoint.h"
#include"endpoint.h"
#include"judge1.h"
#include"judge2.h"
/***********************************************************
用户直接使用的部分
************************************************************/
class manager
{
public:
	manager();
	~manager();
	char* sou;
	startpoint* root;
public:
	void init(const char* sou);
private:
	int state0();
	int state1(unit* pre);
	int state2(unit* pre);
	int state3(unit* pre);
};

