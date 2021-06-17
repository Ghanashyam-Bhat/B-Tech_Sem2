#include<stdio.h>
#include "head.h"
int add()
{
	ans.feet=d1.feet+d2.feet;
	ans.inch=d1.inch+d2.inch;
	while(ans.inch>=12.0)
	{
		ans.inch=ans.inch-12.0;
		++ans.feet;
	}
}