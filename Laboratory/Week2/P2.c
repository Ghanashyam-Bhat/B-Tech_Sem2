#include <stdio.h>
int main()
{
	char c,a='*';
	printf("Input ");
	while ((c = getchar()) != '\n')
	{
		if (c != a)
		{
			putchar(c);
			a = c;
		}
	}
}