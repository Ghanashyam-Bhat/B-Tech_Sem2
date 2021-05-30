#include <stdio.h>
#include "p1.h"
int minimum(int ar[],int n)
{
	printf("\n");
	int x=ar[0],i=1;
	while(i<n)
	{
		if (ar[i] < x)
			x = ar[i];
		i++;
	}
	return x;
}