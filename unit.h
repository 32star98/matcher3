#pragma once
class unit
{
public:
	unit* next;
	unit* sou;							//ʹ������ת�ʹ���
	virtual int run(int point) = 0;
	unit();
	virtual ~unit();
};

