#include <stdio.h>
int validity(int,int,int,int);
int date(int,int,int);
int main()
{
	int d,m,y,k,n;
	printf("Enter date, month and year\n");
	scanf("%d%d%d",&d,&m,&y);
	k = date(d,m,y);
	if (k==0)
		printf("Invalid Date");
	else if(k==100)
		printf("Month is invalid");
	else
	{
		printf("Valid Date\n");
		d++;
		n = date(d,m,y);
		if (n==1)
			printf("The next date is %d/%d/%d",d,m,y);
		else
		{
			m++;
			n = date(1,m,y);
			if (n==1)
				printf("The next date is %d/%d/%d",1,m,y);
			else
			{
				y++;
				printf("The next date is %d/%d/%d",1,1,y);
			
			}
		}
	}
}
int validity(int x,int d,int m,int y)
{	
	int i ;
	if (d>=1 && d<=x)
	{
		i = 1;
		
	}
	else
	{
		i = 0;
	}
	return i;
}
int date(int d,int m , int y)
{
	int z;
	if (m>12)
		z =100;
		
	else if (m != 2)
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
		{
			z = validity(31,d,m,y);
		}
		else
		{
			z = validity(30,d,m,y);
		}
	}
	else 
	{
		if (y%100 == 0)
		{
			if (y%400 == 0)
			{
				z = validity(29,d,m,y);
			}
			else
			{
				z = validity(28,d,m,y);
			}
		}
		else if (y %4 == 0)
		{
			z = validity(29,d,m,y);
		}
		else
		{
			z = validity(28,d,m,y);
		}
	}
	return z;
}