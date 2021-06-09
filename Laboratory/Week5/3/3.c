#include <stdio.h>
#include "3.h"
char ar[1000],check[500],new[1000];
int lis[100];
void main()
{
	printf("Enter any string: ");
	scanf("%[^\n]s",ar);
	fflush(stdin);
	printf("String before removing duplicate %s",ar);
	int x = loc(ar,lis,check);
	removed(ar,lis,x,new);
	printf("\nString after removing duplicate %s",new);
}