#include <stdio.h>
long long int oct(long int);
long long int pal(long long int n);
void main()
{
	long int n;
	printf("Input any decimal number: ");
	scanf("%ld",&n);
	printf("\nEquivalent Octal number: %lld",oct(n));
}
long long int oct(long int n)
{
	long long int res=0;
	while (n)
	{
		res = res*10 + n%8;
		n /= 8;
	}
	return pal(res);
}
long long int pal(long long int n)
{
	long long int r=0,num=n;
	while(n)
	{
		r = r*10 + n%10;
		n = n/10;
	}
	return r;
}