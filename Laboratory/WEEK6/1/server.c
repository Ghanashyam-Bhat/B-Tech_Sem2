#include <stdio.h>
#include "head.h"
void pascal(int n; int a[][n],int n)
{
	int i=1,j;
	for(;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if (j==1 || j==i)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i-1][j]+a[i-1][j-1];
			}
		}
	}
}
void display(int n; int a[][n],int n)
{
	int i=1,j;
	for(;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}