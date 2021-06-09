#include <stdio.h>
#include "1.h"
int compare(char ar[],char rev[])
{
	int i =0;
	int l = length(ar);
	for(;l;l--)
	{
		i ++;
		if (ar[i]!=rev[i])
		{
			i = 0;
			break ;
		}
	}
	return i;
	
}