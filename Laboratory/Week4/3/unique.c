#include <stdio.h>
#include "3.h"
void unique(int ar[],int n)
{
	printf("\n");
	int x=0,j=0;
	while(j<n)
	{
		x = 0;
		for (int i=0;i<n;i++)
		{
			if (ar[j]==ar[i])
				x++;
		}
		if (x<2)
			printf("%d ",ar[j]);
		j++;
	}
}