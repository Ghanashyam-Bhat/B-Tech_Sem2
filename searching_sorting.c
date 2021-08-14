#include <stdio.h>
void swap(int* a , int* b);
void bubble_sort(int *a,int n);
void selection_sort(int *a,int n);
int search(int *a,int min,int max,int x);

int main()
{
	int b[]={15,4,9,56,3,7,84,46,51,24,38,16,9,44,66,33,10};
	int n = sizeof(b)/sizeof(int);
	selection_sort(b,n);	
	for(int i=0;i<n;i++)
		printf("%d\t",b[i]);
	printf("\n");
	int a[]={15,4,9,56,3,7,84,46,51,24,38,16,9,44,66,33,10};
	bubble_sort(a,n);	
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nposition of 46 is %d",search(a,0,n-1,46));
}
int search(int *a,int min,int max,int x)
{
	if(min>max)
		return -1;
	int mid = (min+max)/2;
	if(a[mid]==x)
		return mid;
	else if(a[mid]>x)
		return search(a,min,mid-1,x);
	else if(a[mid]<x)
		return search(a,mid+1,max,x);
}

void bubble_sort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
}

void selection_sort(int a[],int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for (int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min = j;
			}
		}
		if(i!=min)
		{
			swap(&a[i],&a[min]);
		}
		
	}
	
}

void swap(int* a , int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
	
}