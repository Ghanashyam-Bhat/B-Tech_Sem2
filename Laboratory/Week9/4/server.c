#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "head.h"

void sort(void(*p)(int),int x)
{
	p(x);
}
void bubble_sort_roll(int x)
{
	struct stud *temp;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x-i-1;j++)
		{
			if(point[j]->r_num>point[j+1]->r_num)
			{
				temp = point[j+1];
				point[j+1] = point[j];
				point[j]= temp;
			}
		}
	}
}
void bubble_sort_name(int x)
{
	struct stud *temp;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x-i-1;j++)
		{
			if(strcmp(point[j]->name,point[j+1]->name)>0)
			{
				temp = point[j+1];
				point[j+1] = point[j];
				point[j]= temp;
			}
		}
	}
}

void display(int z)
{
	for(int j=0;j<z;j++)
	{
		printf("%d\t%s\n",point[j]->r_num,point[j]->name);
	}
}

