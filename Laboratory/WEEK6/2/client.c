#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "head.h"
int main()
{
	int a[50][50];
	int n,m;
	start:
	system("cls");
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("Enter m value\n");
	scanf("%d",&m);
	if (n!=m)
	{
		printf("Its not a symmetric matrix\nFor a symmetric matrix, n must be equal to n(i.e Square matrix)\n");
		display(a,n);
		getche();
		goto start;
	}
	input(a,n);
	if(symmtry(a,n))
		printf("The given matrix is symmetric\n");
	else
		printf("The given matrix is not symmetric\n");
	display(a,n);
}
