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
		//���߼�
		if (negtive) {
			next->error(1 | type);
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
		next->error(-1);				//�쳣�ύ
	}
	else {
		counter++;
		if (counter == branches) {
			if (negtive) {
				run(point, 2 & type);	//���˽����ƥ��ķ��߼�
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
		next->end_nums_test();			//���ֲ������࣬������ĩ���Ƿ�Ϊ���жϽڵ����
	}
	if (!confirelock) {
		branches++;
	}
}
