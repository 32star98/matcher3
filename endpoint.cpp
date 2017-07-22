#include "stdafx.h"
#include "endpoint.h"


endpoint::endpoint()
{
}


endpoint::~endpoint()
{
}

void endpoint::run(int point, int type)
{
	head->ans = 1;
}

void endpoint::error(int type)
{
	head->ans = -1;
}
