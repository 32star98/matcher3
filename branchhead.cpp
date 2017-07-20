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
	//�յ��������ʼ��
	if (ender) {
		ender->counter = 0;
		ender->point = point;
	}

	//�ݹ�ʽ����
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
	this->ender = ender;		//ָ��ȷ����ͬʱ��Ϊ��߱��
	//��һ�������ӷ�֧���յ�
	branchhead* p = this;
	unit*q;
	while (p != 0) {
		q = p;
		while (q->next != 0) {
			q = q->next;
		}
		q->next = ender;
		//ȥ�����ӵ�ɾ����ɱ��
		q->nextfreeable = false;
		p = p->extra;
	}
	//�ڶ�����ȷ������ͷ���
	q->nextfreeable = true;
	//��������Ϊ�յ�ȷ����֧����
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
		///////////////////////////////////////////����
	}
}
