#include <stdio.h>
int gcd(int,int,int);
int min(int , int, int);
int main()
{
	printf("Enter three numbers: ");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",gcd(a,b,c));
}

int min(int a,int b, int c)
{
	if (a<=b && a<=c)
		return a;
	else if (c<=b && c<=a)
		return c;
	else
		return b;
}
int gcd(int a, int b, int c)
{
	int i=min(a,b,c),res=1;
	for (i;i>=1;i--)
	{
			if (a%i ==0 && b%i==0 && c%i ==0)
			{
				res = res*i;
				return res;
			}
	}
}