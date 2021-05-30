#include <stdio.h>
int main()
{
	printf("Enter n value: ");
	int n,x,y,z=1;
	scanf("%d",&n);
	for(;n;n--,z++)
	{
		for(x=n;x;x--,printf("* "));
		printf("\n");
		for(y=z;y;y--,printf(" "));
	}
}