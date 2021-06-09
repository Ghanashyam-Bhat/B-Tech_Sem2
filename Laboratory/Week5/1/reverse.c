#include <stdio.h>
#include "1.h"
void reverse(char ar[],char rev[])
{
	int l = length(ar);
	rev[l] = '\0';
	for (int i=0;l;l--,i++)
	{
		rev[i]=ar[l-1];
	}
}