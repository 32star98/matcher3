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
	counter = branches + 1;				//����ͨ��
	if (next) {
		//���߼�
		if (negtive) {
			next->error(1 | type);		//�����е����
		}
		else{
			next->run(point, type);
		}
	}
	else {
			/////////////////////////////////����
	}
}

void branchend::error(int type)
{
	if (type == -1) {
		next->error(-1);				//����
	}
	else {
		counter++;
		if (counter == branches) {
			if (negtive) {
				run(point, 2 & type);	//���˽����ƥ��ķ��߼�
			}
			else {
				error(1 | type);		//���߼�
			}
		}
		else if (counter > branches) {
			return;						//��error����
		}
	}
}
