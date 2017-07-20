#include "stdafx.h"
#include "branchhead.h"


branchhead::branchhead()
{
}


branchhead::~branchhead()
{
}

void branchhead::run(int point, int type)	//
{
	//终点计数器初始化
	if (ender) {
		ender->counter = 0;
		ender->point = point;
	}

	//递归式传递
	if (extra == 0) {
		next->run(point, type);
	}
	else {
		next->run(point, type);
		extra->run(point, type);
	}
}

void branchhead::error(int type)
{
	next->error(type);
	branchhead* p = this;
	while (p != 0) {
		p->error(type);
	}
}

void branchhead::add(branchhead* newer)
{
	branchhead* p = this;
	while (p->extra != 0) p = p->extra;
	p->extra = newer;
}

void branchhead::end(branchend * ender)
{
	this->ender = ender;		//指向确定，同时作为最高标记
	//第一步，连接分支和终点
	branchhead* p = this;
	unit*q;
	while (p != 0) {
		q = p;
		while (q->next != 0) {
			q = q->next;
		}
		q->next = ender;
		//去掉连接的删除许可标记
		q->nextfreeable = false;
		p = p->extra;
	}
	//第二步，确定最后释放者
	q->nextfreeable = true;
	//第三步，为终点确定分支数量
	end_nums_test();
	ender->confirelock = true;
}

void branchhead::end_nums_test()
{
	if (next != 0) {
		next->end_nums_test();
		if (extra != 0) {
			extra->end_nums_test();
		}
	}
	else {
		///////////////////////////////////////////报错
	}
}
