#include <stdio.h>
#include "4.h"
int length(char ar[])
{
	char ch = 'i';
	int x=0;
	while (ch != '\0')
	{
		ch = ar[x+1];
		x++;
	}		
	return x;
}
