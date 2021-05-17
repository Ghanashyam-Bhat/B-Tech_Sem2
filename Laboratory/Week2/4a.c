#include <stdio.h>
int main()
{
	int n,x;
	printf("Enter the n value: ");
	scanf("%d",&n);
	x = 1;
	while (x <= 10)
	{
		printf("%d x %d = %d\n",n,x,n*x);
		x++;
	}
}