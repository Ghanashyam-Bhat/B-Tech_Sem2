#include <stdio.h>
#include "head.h"
void main()
{
	int ar[100],x;
	printf("Enter number of elements you want to sort\n");scanf("%d",&x);
	printf("Enter %d elements\n",x);
	read(x,ar);
	printf("Before sorting\n");
	disp(x,ar);
	insertion_sort(x,ar);
	printf("After sorting\n");
	disp(x,ar);
}
