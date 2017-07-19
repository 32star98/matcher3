#pragma once
class unit
{
public:
	unit* next;
	unit* sou;							//使用向下转型处理
	virtual int run(int point) = 0;
	unit();
	virtual ~unit();
};

