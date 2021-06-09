#include <stdio.h>
#include "1.h"
int main()
{
	char ar[100];
	char rev[100];
	printf("Enter string\n");
	scanf("%[^\n]s",ar);
	fflush(stdin);
	reverse(ar , rev);
	printf("Reverser string is = %s",rev);
	if (compare(ar , rev))
		printf("\nGiven string %s is palindrome",ar);
	else 
		printf("\nGiven string %s is not palindrome",ar);
}