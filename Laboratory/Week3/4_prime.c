#include <stdio.h>
int prime(int);
int main()
{
	printf("Input a positive number: ");
	int n;
	scanf("%d",&n);
	if (prime(n))
		printf("\nThe number %d is not a Prime number",n);
	else
		printf("\nThe number %d is Prime number",n);
}
int prime(int n)
{	int i , x;
	for (i=2;i<(n/2)+1;i++)
	{
		if (n%i==0)
			return 1;
	}
	return 0;
}