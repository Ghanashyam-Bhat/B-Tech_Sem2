#include <stdio.h>
#include <string.h>
#include "head.h"

int main()
{
	int d,m,y,k,n;
	char month[5];
	printf("Enter a date (number 3 letter lower case month e.g. 31 jan): " );
	scanf("%d",&d);scanf("%s",month);y=2021;
	m = month_t(month);
	k = date(d,m,y);
	if (k==0)
		printf("Invalid Date");
	else if(k==100)
		printf("Month is invalid");
	else
	{
		//printf("Valid Date\n");
		d++;
		n = date(d,m,y);
		if (n==1)
			printf("Tomorrow is %d %s",d,month);
		else
		{
			m++;
			n = date(1,m,y);
			month_r(m ,month);
			if (n==1)
				printf("Tomorrow is %d %s",1,month);
			else
			{
				y++;
				printf("The next date is %d %s",1,"jan");
			}
		}
	}
}
