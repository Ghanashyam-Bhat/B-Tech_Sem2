#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "head.h"


int less(int z)
{
	return z<22;
}
int even(int z)
{
	return (z%2==0);
}

int binary_search(int a[],int low,int high,int key)
{
	int pos=-1;
	int mid;
	if(low>high)
		return pos;
	else
	{
	mid=(low+high)/2;
		if(a[mid]==key)
	pos=mid;
	else if(a[mid]>key)
		return binary_search(a,low,mid-1,key);
	else
		return binary_search(a,mid+1,high,key);
	}
	return pos;
}
int search(int ar[],int x,int n,int (*p)(int))
{
	int z=binary_search(ar,0,n-1,x);
	if(z!=-1)
		printf("\nNumber is present at position %d",z);
	else
		printf("\nNumber not found");
	return p(x);
}