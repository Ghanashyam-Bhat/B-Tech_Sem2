#include <stdio.h>
int main()
{
	char c;
	printf("Enter the charecter to convert case ");
	while ((c = getchar()) != '\n')
		if (c<= 122 && c >= 97)
			putchar(c-32);
		else
			putchar(c);
}