#include <stdio.h>
#include "4.h"
int main()
{
	int n,p;
	printf("Enter the number and power: ");
	scanf("%d%d",&n,&p);
	printf("%d",power(n,p));
}