#include <stdio.h>
int e(int);
int fact(int);
int main()
{
	printf("Enter n value: ");
	int n;
	scanf("%d",&n);
	printf("Sum of the series is: %d",e(n));
}
int fact(int n)
{
	if ((n)==0)
		return 1;
	else 
		return n*fact(n-1);
}
int e(int n)
{
	int res=0,i;
	for(i=n;i;i--)
		res += fact(i-1);
	return res;
}