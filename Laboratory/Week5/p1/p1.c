#include <stdio.h>
#include "p1.h"
char ar[1000],check [100];
int a[100]={0};
int main()
{

	printf("Enter a string: ");
	scanf("%[^\n]s",ar);
	fflush(stdin);
	for(int i=0;ar[i]!='\0';i++)
		in(check,ar[i],a);
	print(check,a);
}

