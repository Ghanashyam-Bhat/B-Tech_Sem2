#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "head.h"

int main()
{
	FILE* fp = fopen("file.txt","r");
	if(fp==NULL)
	{
		perror("Error Message:");
	}
	else
	{
		int ar[100],n=0,x;
		char buffer[50];
		while(fgets(buffer,50,fp))
		{
			ar[n]=atoi(buffer);
			n++;
		}
		fclose(fp);
		printf("\nEnter the element to be searched:  ");scanf("%d",&x);
		int z = search(ar,x,n,less);
		if(z)
			printf("\n%d is less than 22",x);
		else
			printf("\n%d is greater than 22",x);
		z=search(ar,x,n,even);
		if(z)
			printf("\n%d is even",x);
		else
			printf("\n%d is odd",x);
	}
}
