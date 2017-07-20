#include "stdafx.h"
#include "branchhead.h"


branchhead::branchhead()
{
}


branchhead::~branchhead()
{
}

void branchhead::run(int point, int type)	/////////////等待解决，分支终结标记,初步方案，增加参数
{
	//递归式传递
	if (extra == 0) {
		next->run(point, type | 1);			//无分支，打上最终标记
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
