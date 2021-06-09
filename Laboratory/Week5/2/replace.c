#include <stdio.h>
#include "2.h"
void replace(char ar[],char rep ,int lis[],int x)
{
	for (int i=0 ;i != x ;i++)
	{
		ar[lis[i]]=rep;
	}
}
