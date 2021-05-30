#include <stdio.h>
int gcd(int,int,int);
int prime(int);
int min(int , int, int);
int main()
{
	printf("Enter the values of a,b,c: ");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("GCD(%d,%d,%d) = %d",a,b,c,gcd(a,b,c));
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

int prime(int n)
{	int i , x;
	for (i=2;i<(n/2)+1;i++)
	{
		if (n%i==0)
			return 1;
	}
	return 0;
}

int gcd(int a, int b, int c)
{
	int i,x,res=1;
	for (i=2;i<=min(a,b,c);i++)
	{
		if (! prime(i))
		{
			if (a%i ==0 && b%i==0 && c%i ==0)
			{	res = res*i;
				a /= i; b/= i ; c /= i;
				i = 2;
			}
		}
	}
	return res;
}