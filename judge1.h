#pragma once
#include "unit.h"
#include"startpoint.h"
class judge1 :
	public unit
{
public:
	judge1();
	~judge1();

	int* str = 0;

	virtual void run(int point, int type);
	virtual void error(int type);

	const static int maxlen = 1024;
	static int strlen(int* str);
	static int strlen(char* str);
};

