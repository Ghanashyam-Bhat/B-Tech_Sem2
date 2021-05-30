#include <stdio.h>
#include "p1.h"
int main()
{	
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int ar[n];
	entry(ar,n);
	printf("\nMaximum %d",maximum(ar,n));
	printf("\nMinimum %d",minimum(ar,n));
}