#include <stdio.h>
#include <math.h>
int arm(int n);
int per(int n);
void main()
{
	int n;
	printf("Input any number: ");
	scanf("%d",&n);
	if (arm(n))
		printf("\nThe %d Armstrong Number",n);
	else 
		printf("\nThe %d Not an Armstrong Number",n);
	if (per(n))
		printf("\nThe %d Perfect Number",n);
	else 
		printf("\nThe %d Not a perfect Number",n);

}
int per(int n)
{
	int res=0,i;
	for(i=1;i<n;i++)
	{
		if (n%i==0)
			res+=i;
	}
	return res==n;
}
int arm(int n)
{
	int x,z = n,p,res=0,num=n,y;
	for(x=0;z;z/=10,x++);
	p = x;
	while(n)
	{	
		x = p;
		z=1;
		y = n%10;
		for(x;x;x--)
			z *=y;
		res += z;
		n /= 10;
	}
	return res==num;
}