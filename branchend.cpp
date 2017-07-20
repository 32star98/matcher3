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
	if (next) {
		//否定逻辑
		if (negtive) {
			next->error(1 | type);
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
		next->error(-1);				//异常提交
	}
	else {
		counter++;
		if (counter == branches) {
			if (negtive) {
				run(point, 2 & type);	//过滤结果不匹配的反逻辑
			}
			else {
				error(-1);
			}
		}
		else if (counter > branches) {
			error(-1);
		}
	}
}

void branchend::end_nums_test()
{
	if (next != 0) {
		next->end_nums_test();			//发现部分冗余，可以由末端是否为空判断节点身份
	}
	if (!confirelock) {
		branches++;
	}
}
