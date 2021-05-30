#include <stdio.h>
#include "4.h"
int power(int n, int p)
{
	if (p==0)
		return 1;
	else
		return n*power(n,p-1);
}