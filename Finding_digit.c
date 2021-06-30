/*
#include<stdio.h>
int digit(int n,int k);
int main()
{
    int n,k;
    printf("Enter the number:");scanf("%d",&n);
    printf("Enter the number of k:");scanf("%d",&k);
    printf("The %d th digit is:%d",k,digit(n,k));
}
int digit(int n,int k)
{
    int d = 0;
    for (int i = n ; i != 0;i /= 10,d++);
	n *= 10;
    if (k>d)
        return 0;
    else
    {
		for(int c=0;k>c;n/=10,c++);
		return n%10;
    }
}
*/

#include<stdio.h>
int digit(int n,int k);
int main()
{
    int n,k;
    printf("Enter the number:");scanf("%d",&n);
    printf("Enter the number of k:");scanf("%d",&k);
    printf("The %d th digit is:%d",k,digit(n*10,k));
}
int digit(int n,int k)
{
		for(int c=0;k>c && n/10;n/=10,c++);
		return n%10;
}