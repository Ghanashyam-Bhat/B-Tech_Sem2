#include <stdio.h>
#include "p2.h"
int strend(char s[],char t[])
{
	int sl=length(s),tl=length(t);
	for(;tl;tl--,sl--)
	{
		if(s[sl-1]!=t[tl-1])
			return 0;
	}
	return 1;
}