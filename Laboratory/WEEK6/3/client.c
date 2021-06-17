#include<stdio.h>
#include "head.h"
int main()
{
	printf("Enter date1:\n ");
	scanf("%d/%d/%d",&date1.d,&date1.m,&date1.y);
	printf("Enter date2:\n ");
	scanf("%d/%d/%d",&date2.d,&date2.m,&date2.y);
	printf("\nDate1=");
	printf("%d/%d/%d",date1.d,date1.m,date1.y);
	printf("\nDate2=");
	printf("%d/%d/%d",date2.d,date2.m,date2.y);
	if(compare()==0)
		printf("\nDate1 is equal to Date2");
	else if(compare()>0)
		printf("\nDate1 is greater than Date2");
	else
		printf("\nDate1 is lesser than Date2");
}
