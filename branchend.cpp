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
	counter++;
	if (blocked) {
		return;
	}
	blocked = true;				//����ͨ��
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
	counter++;
	if (blocked) {
		return;
	}
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
				next->error(1 | type);	//���߼�
			}
			blocked = true;
		}
	}
}
