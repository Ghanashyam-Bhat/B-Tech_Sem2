#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"

int main()
{
	HEAD q;
	initialize(&q);
	COMP c;
	int choice,ele;
	printf("enter your choice\n1.enqueue 2.dequeue 3.display 4 exit\n");
	scanf("%d",&choice);
	do
	{
	switch(choice)
	{
		case 1: printf("enter the detail and priority\n");
			scanf("%d %d",&(c.details), &(c.priority));
			enqueue(&q,&c);
			break;
		case 2: dequeue(&q);
			break;
		case 3: display(&q);
			break;
		default: exit(0);

	}
	printf("enter ur choice\n1.insert 2.delete 3.display 4 exit\n");
	scanf("%d",&choice);
	}while(choice<4);	
return 0;
}
