#include <stdio.h>
void swap(int** a , int** b);
void bubble_sort(int **p,int n);
int main()
{
	int a[]={15,4,9,56,3,7,84,46,51,24,38,16,9,44,66,33,10};
	int n = sizeof(a)/sizeof(int);
	int *p[n];
	for (int i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	bubble_sort(p,n);
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n\n");
	for(int i=0;i<n;i++)
		printf("%d\t",**(p+i));
}


void bubble_sort(int **p,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*p[j]>*p[j+1])
			{
				swap(&p[j],&p[j+1]);
			}
		}
	}
}

void swap(int** a , int** b)
{
	int *c = *a;
	*a = *b;
	*b = c;
	
}