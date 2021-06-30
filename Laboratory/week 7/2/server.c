#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"


void initialize(HEAD* q)
{
	q->head = NULL;	
}

void enqueue(HEAD* q, COMP* com)
{
	NODE* temp = (NODE*) malloc(sizeof(NODE));
	temp->c.details = com->details;
	temp->c.priority = com->priority; 
	temp->link = NULL;
	temp->link = q->head;
	q->head = temp;
}

void dequeue(HEAD* q)
{
	if(q->head == NULL)
		printf("\n no elements\n");
	else
	{
		NODE* present = q->head;
		NODE* prev = NULL;
		int max = 0;
		NODE* prev_max = NULL;
		while(present != NULL)
		{
			if(present->c.priority >= max)
			{
				max = present->c.priority;
				prev_max = prev;
			}
			prev = present;
			present = present->link;
		}	
		COMP compo;
		if(prev_max != NULL)
		{
			NODE* temp = prev_max->link;
			prev_max->link = temp->link;
			compo.details = temp->c.details;
			compo.priority = temp->c.priority;
			free(temp);
		}
		else
		{
			NODE* temp = q->head;
			q->head = q->head->link;
			compo.details = temp->c.details;
			compo.priority = temp->c.priority;
			free(temp);
		}	
		printf("deleted node detail is %d with priority %d\n",compo.details,compo.priority);
	}
}

void display(HEAD* q)
{
	if(q->head == NULL)
		printf("No elements to display\n");
	else
	{
		NODE* temp = q->head;
		while(temp!=NULL)
		{
			printf("details: %d \t priority: %d\n", temp->c.details, temp->c.priority);
			temp = temp->link;
		}

	}
}