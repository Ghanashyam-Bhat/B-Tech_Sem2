#include <stdio.h>
void fib(int);
void main()
{
	printf("Enter the range: ");
	int n;
	scanf("%d",&n);
	printf("Fibonacci series is\n");
	fib(n);
}
void fib(int n)
{
	int x=1,y=0,z;
	printf("\n%d ",0);
	if (n>=1)
	{
		while (x<=n)
		{	
			printf("%d ",x);
			z = y;
			y = x;
			x = x+z;
		}
	}
}