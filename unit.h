#pragma once
/*******************************
ע�⣬\xƥ��������Ҫת�壬��x�󷴣�
��Ҫ��ǰ����ת���ַ���
���жϴ洢�ڷ�֧�յ�
*******************************/
class unit
{
public:
	unit* next=0;
	unit* sou;
	bool nextfreeable = true;		//��ֹ�ظ��ͷţ���ҪΪ��֧ʹ��
	//long int mask = 0;				//�ϲ��֧��ַ��������ʶ��
	virtual void run(int point,
				int type) = 0;	//pointָʾ�����㣬typeָʾ������ʽ��((1ĩ��֧)+(2ĩѭ��)) -1,�����쳣
	virtual void error(int type) = 0;
	void insert(unit* extra);
	void add(unit* nex);
	virtual void end_nums_test();	//��֧�������ԣ�brancher����ĩ��ʹ��(��branch_.h������)
	unit();
	virtual ~unit();
};