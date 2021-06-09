#include <stdio.h>
#include "2.h"
int main()
{
	int lis[100];
	char ar[1000],ch,rep;
	printf("Enter the string: ");scanf("%[^\n]",ar);fflush(stdin);
	printf("Enter the character to replace: ");scanf("%c",&ch);fflush(stdin);
	printf("Enter the character to replace with %c: ",ch);scanf("%c",&rep);fflush(stdin);
	printf("Before replace: %s",ar);
	int x = find(ar,ch ,lis);
	replace(ar,rep ,lis,x);
	printf("\nAfter replace: %s",ar);
}




