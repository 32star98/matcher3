#pragma once
/*******************************
ע�⣬\xƥ��������Ҫת�壬��x�󷴣�
��Ҫ��ǰ����ת���ַ���
*******************************/
class unit
{
public:
	unit* next=0;
	unit* sou;
	bool nextfreeable = true;		//��ֹ�ظ��ͷţ���ҪΪ��֧ʹ��
	virtual void run(int point,
				int type) = 0;	//pointָʾ�����㣬typeָʾ������ʽ��((1ĩ��֧)+(2ĩѭ��)) -1,�����쳣
	virtual void error(int type) = 0;
	void insert(unit* extra);
	void add(unit* nex);
	unit();
	virtual ~unit();
};