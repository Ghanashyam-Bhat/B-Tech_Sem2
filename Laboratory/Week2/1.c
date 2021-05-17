#include <stdio.h>
void grade(char);
int main()
{
	int m;
	printf("Enter your marks: ");
	scanf("%d",&m);
	if (m > 85 && m<= 100)
		grade('A');
	else if(m <= 85 && m>60)
		grade('B');
	else if (m <= 60 && m > 40)
		grade('C');
	else if (m <= 40 && m>30)
		grade('D');
	else 
		printf("You failed");
	return 0;
}

void grade(char x)
{
	printf("You got grade %C",x);
}