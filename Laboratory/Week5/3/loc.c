#include <stdio.h>
#include "3.h"
int loc(char ar[],int lis[],char check[])
{
	char ch;
	int i=0,x=0;
	while(ar[i]!='\0')
	{
		if (in(check,ch))
		{
			lis[x]=i;
			x++;
		}
		i++;
		ch=ar[i];
	}
	return x;
}