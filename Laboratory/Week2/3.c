#include <stdio.h>
#include <math.h>
void main()
{
	int n,s,c,k,a;
	printf("Enter the number which you want to check ");
	scanf("%d",&n);
	printf("\nEnter the bit position starting from zero ");
	scanf("%d",&k);
	a = pow(2,k);
	if ((n&a) == 0)
		printf("\nThe bit is not set");
	else 
		printf("The bit is set");
	
	
	printf("\nEnter the bit position which you want to set");
	scanf("%d",&s);
	a = pow(2,s);
	printf("\nset : %d",a);
	
	if ((n&a) == 0)
	{
		a = n+a;
		printf("\nThe number after set is:%d",a);
	}
	else 
		printf("\nThe number after set is:%d",n);
	
	
	
	printf("\nEnter the bit position which you want to clear");
	scanf("%d",&c);
	a = pow(2,c);
	printf("\nset : %d",0);
	if ((n&a) != 0)
	{
		a = n - a;
		printf("\nThe number after set is:%d", a);
	}
	else 
		printf("\nThe number after set is:%d",n);
	
}