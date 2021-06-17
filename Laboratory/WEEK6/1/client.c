#include <stdio.h>
#include "head.h"
int main()
{
	int a[50][50];
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	pascal(a,n);
	display(a,n);
}