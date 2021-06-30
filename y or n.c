#include <stdio.h>
char getContinue()
{
	char c='c';
	while(c!= 'Y' && c!= 'N' && c!= 'y' && c!= 'n')
	{
		printf("Do you want to continue?(Y/N)\n");
		scanf("%c",&c);
		fflush(stdin);
	}
	if (c=='Y' || c=='y')
		return 'Y';
	else 
		return 'N';
}
int main()
{
	char k = getContinue();
	printf("Returned value is %c",k);
}
