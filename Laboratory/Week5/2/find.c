#include <stdio.h>
#include "2.h"
int find(char ar[],char ch ,int lis[])
{
	int x=0;
	for (int i = 0;ar[i]!='\0';i++) 
	{
		if (ar[i]==ch)
		{
			lis[x]=i;
			x++;
		}
	}
	return x;
}