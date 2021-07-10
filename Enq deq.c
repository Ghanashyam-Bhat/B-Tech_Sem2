#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct component
{
	int value;
	int priority;
}COMPO;

typedef struct node 
{
	COMPO info;
	struct node *link;
}NODE;

void initialize(NODE *);
void enqueue(NODE *);
void dequeue(NODE *);
void display(NODE *);

//-------------------------------------------------------------

void main()
{
	NODE head;
	initialize(&head);
	int choice;
	do
	{
		printf("\nEnter 1.Enqueuing\t2.Dequeuing\t3.Display\t4.To Exit\n");
		scanf("%d",choice);
		switch(choice)
		{
			case 1:enqueue(&head);
					break;
			case 2:dequeue(&head);
					break;
			case 3:display(&head);
					break;
			case 4:exit(0);
					break;
			default:printf("Please Enter above mentioned optons\n");
					break;
		}
	}while("True");
	
}

//-------------------------------------------------------------

void initialize(NODE *head)
{
	head->link=NULL;
}
//-------------------------------------------------------------

void enqueue(NODE *head)
{	
	NODE* temp = head->link;
	head->link = (NODE*)malloc(sizeof(NODE));
	head->link->link=temp;
	printf("Enter details and priority\n");
	scanf("%d%d",&(head->link->info.value),&(head->link->info.priority));
}
//-------------------------------------------------------------

void dequeue(NODE *head)
{
	NODE *temp_prev,*temp_pres,*temp_max,*temp_prev_max;
	temp_pres = head->link;
	temp_prev_max = head;
	temp_max = head->link;
	
	while(temp_pres)
	{
		temp_prev = temp_pres;
		temp_pres = temp_pres->link;
		if(temp_pres->info.priority > temp_max->info.priority)
		{
			temp_max = temp_pres;
			temp_prev_max = temp_prev;
		}
	}
	temp_prev_max ->link = temp_max->link;
	temp_max->link = NULL ; 
	printf("Deleted element had value: %d and priority: %d\n",temp_max->info.value,temp_max->info.priority);
}
//-------------------------------------------------------------

void display(NODE *head)
{
	NODE* temp = head->link;
	while(temp)
	{
		printf("Value : %d\tPriority : %d\n",temp->info.value,temp->info.priority);
		temp = temp->link;
	}
	printf("End of List\n");
}