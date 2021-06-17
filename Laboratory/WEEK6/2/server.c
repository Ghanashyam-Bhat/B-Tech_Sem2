#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "head.h"
void input(int n ; int a[][n] , int n)
{
	printf("Enter elements in matrix of size %dx%d:\n",n,n);
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);fflush(stdin);
		}
	}
}

int symmtry(int n ; int a[][n] , int n)
{
	int x=1;
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
				return 0;
		}
	}
	return x;
}

void display(int n ; int a[][n] , int n)
{
	int i,j;
	printf("The given matrix is\n");
	for(i = 0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the given matrix is\n");
	for(i = 0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}