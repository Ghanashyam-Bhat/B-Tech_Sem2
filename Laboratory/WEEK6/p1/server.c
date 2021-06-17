#include <stdio.h>
#include "head.h"
void insert(int n;int (*p)[n],int n, int u, int l,int d)
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i==(n-j))
				*(*(p+i)+j)=d;
			else if(i<(n-j))
				*(*(p+i)+j)=u;
			else if(i>(n-j))
				*(*(p+i)+j)=l;
		}
	}
}

void display(int n ; int a[][n] , int n)
{
	int i,j;
	printf("This is a %dx%d matrix:\n",n,n);
	for(i = 0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (a[i][j]>=0)
				printf(" ");
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}