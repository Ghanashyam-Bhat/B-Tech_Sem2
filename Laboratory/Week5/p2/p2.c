#include <stdio.h>
#include "p2.h"
int main()
{
	char s[100],t[50];
	printf("Enter string s: ");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("Enter string t: ");
	scanf("%[^\n]s",t);
	fflush(stdin);
	int x = strend(s,t);
	printf("%d",x);
}
