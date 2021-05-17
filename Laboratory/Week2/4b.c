#include <stdio.h>
int main()
{
	int i,n,z;
	printf("Enter the n value ");
	scanf("%d",&n);
	for (i=0; i < n; i++)
	{
		z = 0;
		while(z <= i)
		{
			printf("*");
			z ++;
		}
		printf("\n");
	}
	
}
