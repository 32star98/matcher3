#include "stdafx.h"
#include "branchend.h"


branchend::branchend()
{
}


branchend::~branchend()
{
}

void branchend::run(int point, int type)
{
	if (counter > branches) {
		return;
	}
	counter = branches + 1;				//阻塞通道
	if (next) {
		//否定逻辑
		if (negtive) {
			next->error(1 | type);		//觉得有点奇怪
		}
		else{
			next->run(point, type);
		}
	}
	else {
			/////////////////////////////////报错
	}
}

void branchend::error(int type)
{
	if (type == -1) {
		next->error(-1);				//报错
	}
	else {
		counter++;
		if (counter == branches) {
			if (negtive) {
				run(point, 2 & type);	//过滤结果不匹配的反逻辑
			}
			else {
				error(1 | type);		//正逻辑
			}
		}
		else if (counter > branches) {
			return;						//后error阻塞
		}
	}
}
