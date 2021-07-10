#include <stdio.h>
#include <string.h>
#include "head.h"

int month_t(char month[])
{
		if(strcmp(month,"jan")==0) return jan;
		else if(strcmp(month,"feb")==0) return feb;
		else if(strcmp(month,"mar")==0) return mar;
		else if(strcmp(month,"apr")==0) return apr;
		else if(strcmp(month,"may")==0) return may;
		else if(strcmp(month,"jun")==0) return jun;
		else if(strcmp(month,"jul")==0) return jul;
		else if(strcmp(month,"aug")==0) return aug;
		else if(strcmp(month,"sep")==0) return sep;
		else if(strcmp(month,"oct")==0) return oct;
		else if(strcmp(month,"nov")==0) return nov;
		else if(strcmp(month,"dec")==0) return dec;
}

void month_r(int m,char month[])
{
		if( jan==m) {strcpy(month,"jan"); }
		else if(feb ==m) {strcpy(month,"feb"); }
		else if(mar ==m) {strcpy(month,"mar"); }
		else if(apr ==m) {strcpy(month,"apr"); }
		else if(may ==m) {strcpy(month,"may"); }
		else if(jun ==m) {strcpy(month,"jun"); }
		else if(jul ==m) {strcpy(month,"jul"); }
		else if(aug ==m) {strcpy(month,"aug"); }
		else if(sep ==m) {strcpy(month,"sep"); }
		else if(oct ==m) {strcpy(month,"oct"); }
		else if(nov ==m) {strcpy(month,"nov"); }
		else if(dec ==m) {strcpy(month,"dec"); }

}

int validity(int x,int d,int m,int y)
{	
	int i ;
	if (d>=1 && d<=x)
		i = 1;
	else
		i = 0;
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
			z = validity(31,d,m,y);
		else
			z = validity(30,d,m,y);
	}
	else 
	{
		if (y%100 == 0)
		{
			if (y%400 == 0)
				z = validity(29,d,m,y);
			else
				z = validity(28,d,m,y);
		}
		else if (y %4 == 0)
			z = validity(29,d,m,y);
		else
			z = validity(28,d,m,y);
	}
	return z;
}