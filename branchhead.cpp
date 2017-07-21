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
		ender->blocked = false;
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
	ender->branches = end_nums_get();
}

int branchhead::end_nums_get(int base = 0)
{
	return (extra == 0) ? 1 : extra->end_nums_get(base + 1);
}

