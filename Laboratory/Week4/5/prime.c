#include <stdio.h>
#include "5.h"
int prime(int n)
{	int i , x;
	for (i=2;i<(n/2)+1;i++)
	{
		if (n%i==0)
			return 0;
	}
	return 1;
}