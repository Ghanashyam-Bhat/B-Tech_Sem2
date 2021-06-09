#include <stdio.h>
#include "3.h"
void removed(char ar[],int lis[] ,int x, char new[])
{
	int i=0,j=0,k=0;
	for(;ar[k]!='\0';k++)
	{
		if (lis[i]!=k)
		{
			new[j]=ar[k];
			j++;
			
		}
		else
		{
			i++;
		}
	}
	new[j]='\0';
}