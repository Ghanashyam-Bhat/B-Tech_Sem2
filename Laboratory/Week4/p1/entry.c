#include <stdio.h>
#include "p1.h"
void entry(int ar[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nEnter the value for %dth index: ",i);
		scanf("%d",&ar[i]);
	}
}