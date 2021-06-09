#include <stdio.h>
#include "p1.h"
int print(char *check,int *a)
{
	int i=0;
	while(a[i]!=0)
	{
		printf("%c occurs is %d times\n",check[i],a[i]);
		i++;
	}
}