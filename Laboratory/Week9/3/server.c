#include <stdio.h>
#include "head.h"
void read(int x,int ar[])
{
	for(int i=0;i<x;scanf("%d",&ar[i]),i++);
}
void insertion_sort(int x,int ar[])
{
	int i, key, j;
	for (i = 1; i < x; i++)
	{
		key = ar[i];
		j = i - 1;
		while (j >= 0 && ar[j] > key)
		{
			ar[j + 1] = ar[j];
			j = j - 1;
		}
		ar[j + 1] = key;
	}
}
void disp(int x,int ar[])
{
	for(int i=0;i<x;printf("%d\n",ar[i]),i++);
}