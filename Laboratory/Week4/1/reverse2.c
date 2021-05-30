#include <stdio.h>
#include "1.h"
void reverse2(int *p, int n)
{
	printf("\n");
	for(int i=(n-1) ; i>=0;printf("%d ",*(p+i)),i--);
}