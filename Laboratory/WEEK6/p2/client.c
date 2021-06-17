#include<stdio.h>
#include "head.h"
int main()
{
	printf("For first distance: \n");
	printf("Enter feet: ");
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	scanf("%f",&d1.inch);
	printf("For second distance: \n");
	printf("Enter feet: ");
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	scanf("%f",&d2.inch);
	add();
	printf("\nSum of distances: %d\' -%.1f\" ",ans.feet,ans.inch);
}
