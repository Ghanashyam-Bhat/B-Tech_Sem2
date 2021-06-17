#include <stdio.h>
#include "head.h"
int main()
{
	printf("For first complex number\nEnter real and imaginary part");
	scanf("%f%f",&c1.real,&c1.imag);
	printf("For second complex number\nEnter real and imaginary part");
	scanf("%f%f",&c2.real,&c2.imag);
	add();
	printf("\nsum = %.2f+i%.2f",ans.real,ans.imag);
	sub();
	printf("\nsum = %.2f+i%.2f",ans.real,ans.imag);
}
