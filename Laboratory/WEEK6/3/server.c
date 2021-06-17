#include<stdio.h>
#include "head.h"

int compare()
{
	int res;
	if(date1.d==date2.d && date1.m==date2.m  && date1.y==date2.y)
		res=0;
	else if(date1.y>date2.y || (date1.y==date2.y && date1.m>date2.m) || (date1.y==date2.y && date1.m==date2.m && date1.d==date2.d))
		res=1;
	else
		res=-1;
	return res;

}