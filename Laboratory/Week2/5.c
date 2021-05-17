#include <stdio.h>
int main()
{
	float a,b ;
	char c;
	printf("Enter the value of a and b ");
	scanf("%f%f",&a,&b);
	printf("Enter the operator(*,/,+,-) ");
	scanf(" %c" , &c);
	 switch (c)
	 {
		 case '+' : printf("%.2f" , a+b);
			break ;
		case '-' : printf("%.2f" , a-b);
			break ; 
		case '*' : printf("%.2f" , a*b);
			break ; 
		case '/' : printf("%.3f" , a/b);
			break;
		default :
			printf("Invalid operator");
	 }
	
}