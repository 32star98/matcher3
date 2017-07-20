#include "stdafx.h"
#include "branchhead.h"


branchhead::branchhead()
{
}


branchhead::~branchhead()
{
}

void branchhead::run(int point, int type)	/////////////�ȴ��������֧�ս���,�������������Ӳ���
{
	//�ݹ�ʽ����
	if (extra == 0) {
		next->run(point, type | 1);			//�޷�֧���������ձ��
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
	while (p != 0) p = p->extra;
	p->extra = newer;
}
