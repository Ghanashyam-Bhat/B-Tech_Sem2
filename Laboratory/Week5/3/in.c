#include <stdio.h>
#include "3.h"
int in(char check[], char ch)
{
	int i=0;
	while(check[i] != '\0')
	{
		if (ch==check[i])
			return 1;
		i++;
	}
	check[i] = ch;
	return 0;
}