#include <stdio.h>
#include "p1.h"
int in(char *check, char ch,int *a)
{
	int i=0;
	while(check[i] != '\0')
	{
		if (ch==check[i])
		{
			a[i]+=1;
			return 1;
		}
		i++;
	}
	check[i] = ch;
	a[i]=1;
	return 0;
}