#include <stdio.h>
#include "2.h"
int main()
{
	int n,r;
	printf("Enetr n and c values: ");
	scanf("%d%d",&n,&r);
	comb(fact(n),fact(r),fact(n-r));
}