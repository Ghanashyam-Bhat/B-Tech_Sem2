#include <stdio.h>
int pal(int);
int main()
{
	printf("Enter the number: ");
	int n;
	scanf("%d",&n);
	if (pal(n))
		printf("\nIt is palindrome");
	else
		printf("\nIt is not palindrome");
}
int pal(int n)
{
	int r=0,num=n;
	while(n)
	{
		r = r*10 + n%10;
		n = n/10;
	}
	return num == r;
}