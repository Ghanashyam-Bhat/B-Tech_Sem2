#include <stdio.h>
#include "4.h"
void concate(char a[], char b[])
{
	int al=length(a),bl=length(b);
	for (int i =0;i <= bl;i++)
		a[al+i]=b[i];
}
