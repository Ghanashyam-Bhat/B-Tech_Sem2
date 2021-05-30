#include <stdio.h>
#include "1.h"
int main()
{	
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int ar[n];
	entry(ar,n);
	reverse1(ar,n);
	reverse2(ar,n);
}