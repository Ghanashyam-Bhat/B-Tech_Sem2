#include <stdio.h>
#include "p2.h"
void fib(int n)
{
	int x=1,y=0,z;
	printf("\n%d\n",0);
	if (n>=1)
	{
		int i=1;
		while (i<n)
		{	
			printf("%d\n",x);
			z = y;
			y = x;
			x = x+z;
			i++;
		}
	}
}