#include <stdio.h>
#include "2.h"
int fact(int n)
{
	if (n==0)
		return 1;
	else
		return n*fact(n-1);
}