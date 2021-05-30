#include <stdio.h>
int tri(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter three angles of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if (tri(a,b,c))
		printf("\nTriangle is Valid");
	else
		printf("\nTriangle is Invalid");
}
int tri(int a, int b, int c)
{
	if (a==0 || b==0 || c==0)
		return 0;
	else 
		return (a+b+c) == 180;
}