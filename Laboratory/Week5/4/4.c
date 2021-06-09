#include <stdio.h>
#include "4.h"
int main()
{
	char a[100],b[100];
	int n;
	printf("Enter 1st string: ");
	scanf("%[^\n]s",a);
	fflush(stdin);
	printf("Enter 2nd string: ");
	scanf("%[^\n]s",b);
	fflush(stdin);
	printf("Eneter the number of times you want to append\n");
	scanf("%d",&n);
	for(;n;n--)
		concate(a,b);
	printf("\nConcatinated string is %s",a);
}
