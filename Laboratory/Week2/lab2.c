// question 1
/*
#include<stdio.h>
int main()
{
    int m;
    printf("enter the marks : \n");
    scanf("%d" , &m);

    if (m>80 && m<=100)
    {
       printf("your grade is 'A'\n") ;

    }

    else if (m>60 && m<=80)
    {
       printf("your grade is 'B'\n") ;

    }
    else if (m>40 && m<=60)
    {
       printf("your grade is 'C'\n") ;

    }
    else if (m>30 && m<=40)
    {
       printf("your grade is 'D'\n") ;

    }
    else if (m<=30)
    {
       printf("your grade is 'F'\n") ;

    }
    else
    {
        printf("enter a valid marks\n");
    }
    return 0;
}



//question 2
#include<stdio.h>
int main()
{
    char c;
    printf("enter the characters to convert the upper case\n");
    while ((c=getchar())!='\n')
    {
        if ((c>='a')&&(c<='z'))
        {
            c=c-32;
        }
        putchar(c);
    }
    printf("\n");
    return 0;
}



// question 3
// part 1 , 2 , 3
#include<stdio.h>
int main()
{
    int no,s,c;
    int position;
    printf("enter the number value\n");
    scanf("%d", &no);
    printf("enter the position from 0\n");
    scanf("%d", &position);
    s=no&(1<<position);
    if (s==0)
    {
        printf("the bit is not set");
    }
    else
    {
        printf("the bit is set");
    }
    printf("enter the position from 0 for seting the bit\n");
    scanf("%d", &position);
    c= no|(1<<position);
    printf("the no after seting is %d",c);

    printf("enter the position from 0 for removing the bit\n");
    scanf("%d", &position);
    c= no&~(1<<position);//or c use ^ ---- check it
    printf("the no after clear is %d",c);

    return 0;
}



//question 4
//part 1
#include<stdio.h>
int main()
{
    int n,m,no;
    printf("enter the no to generate the table :");
    scanf("%d", &no);
    for(n=1;n<=10;n++)
    {
        m= no * n;
        printf("\n%d X %d = %d",no,n,m);
    }
    return 0;
}

//part 2
#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("enter the no of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}


//question 5
#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    if (operator=='/' && second==0){
        printf ("operation can not be performed");
    }

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}



// question 6
#include <stdio.h>

int main()
{
    int dd,mm,yy;
    int maxday;
    int maxmonth=12;

    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);

    //check year
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
               { printf("Date is valid.\n");
                maxday=31;
                }
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                {printf("Date is valid.\n");
                maxday=30;
                }
            else if((dd>=1 && dd<=28) && (mm==2))
                {printf("Date is valid.\n");
                maxday=28;
                }
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                {printf("Date is valid.\n");
                maxday=29;
                }
            else
               { printf("Day is invalid.\n");
               }
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }

    dd=dd+1;
    if (dd > maxday)
    {   dd=1;
        mm+=1;
        if (mm>12)
        { mm=1;
          yy=yy+1;
        }
    }
    printf("the next date is : %d / %d /%d\n",dd ,mm ,yy);

    return 0;
}


//practice question 1
#include<stdio.h>
#include<math.h>

double det(double a,double b,double c)
{
    double d;
    d = pow(b,2)-4*a*c;
    return d;

}
int main()
{
    float a,b,c;
    printf("enter the coefficients respectively \n");
    scanf("%f %f %f",&a ,&b ,&c);
    float r1,r2,d;
    d=det(a,b,c);
    if (d==0)
    {
        r1= (-b+sqrt(d))/(2*a);
        printf("the roots are equal and is equal to :%.2f\n",r1);
    }
    else if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("the roots are real and distinct and is equal to :%.2f  ,  %.2f\n",r1,r2);
    }
    else
    {
        printf("the roots are imaginary\n");
    }
    return 0;
}

*/

//practice question 2

#include<stdio.h>
int main()
{
    char c,a='*';
    printf("input the string \n");
    while((c=getchar())!='\n')
    {
        if(c!=a)
        {
            putchar(c);
            a=c;
        }
    }
    printf("\n");
    return 0;
}
