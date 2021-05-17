#include <stdio.h>
#include <math.h>
int del(double a,double b,double c)
{
	int d;
	d = pow(b,2)-4*a*c;
	return d;
}

int main()
{
	double a,b,c,d,x,y;
	printf("Enter the values of a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	d = del(a,b,c);
	if (d==0)
	{
		x =(-b)/ (2*a);
		printf("\nroot1 = root2 = %.2lf",x);
	}
	else if (d >0)
	{
		x = (-b)/(2*a);
		y = sqrt(d)/(2*a);
		printf("\nroot1 = %.2lf and root2 = %.2lf",x+y,x-y);
	}
	else if (d<0)
	{
		x = (-b)/(2*a);
		y = sqrt(-d)/(2*a);
		printf("\nroot1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi",x,y,x,y);
	}
}
