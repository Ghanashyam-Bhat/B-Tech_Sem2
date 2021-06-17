#include <stdio.h>
#include "head.h"
int main()
{
	int n=5;
	int u=1,l=-1,d=0;
	printf("Enter the size of square matrix: ");
	scanf("%d",&n);
	printf("Enter value for upper half, lower half and diagonal value: ");
	scanf("%d%d%d",&u,&l,&d);
	int a[n][n];
	insert(a,n,u,l,d);
	display(a,n);
}
