#include <stdio.h>
#include "5.h"
int next(int n)
{	
	n++;
	for(;;n++)
		if(prime(n))
			return n;
}