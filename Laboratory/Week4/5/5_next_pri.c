#include <stdio.h>
#include "5.h"
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (prime(n))
		printf("\n%d is prime\n",n);
	else
		printf("\n%d is not prime\n",n);
	printf("Next prime number is %d",next(n));
}