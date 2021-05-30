#include <stdio.h>
#include "3.h"
int main()
{	
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d",&n);
	int ar[n];
	entry(ar,n);
	unique(ar,n);
}
