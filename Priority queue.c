
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data
{
	char name[50];
	int priority;
}D;

typedef struct sample
{
	D info;
	struct sample* link;
}S;

typedef struct head
{
	S* head;
}H;

void display(H* h);
void enq(H* h,int n);
void deq(H* h);

int main()
{
	int n;
	H h;h.head = NULL;
	char ch;	
	while(1)
	{
		printf("\ne to enqueue , d to dequeue , s to display, c to quit: ");fflush(stdin);scanf("%c",&ch);
		if(ch=='e')
		{
			printf("Enter the number of elements: ");scanf("%d",&n);
			enq(&h,n);
		}
		else if(ch=='d')
			deq(&h);
		else if(ch=='s')
			display(&h);
		else if(ch =='c')
			return -1;
		else
			printf("select one of the options\n");
	}
}

void enq(H* h,int n)
{
	S* p;
	int i=0;
	while (i<n)
	{
		p = (S*)malloc(sizeof(S));
		fflush(stdin);
		printf("\nName : ");scanf("%[^\n]s",p-> info.name);
		printf("Priority: ");scanf("%d",&(p-> info.priority));
		p->link = h->head;
		h->head = p;
		i++;
	}
}

void display(H* h)
{
	S* p=h->head;
	while (p)
	{
		printf("%d %s\n",p-> info.priority,p-> info.name);
		p = p->link;
	}
}

extern void deq(H* h)
{
	S* p= h ->head;
	if (p==NULL)
		printf("There is nothing to dequeue");
	else
	{
		S *max=p,*p_max= NULL,*prev=NULL;
		while(p!=NULL)
		{
			if(max->info.priority<p->info.priority)
			{
				p_max=prev;
				max = p;
			}
			prev = p;p=p->link;
		}
		if(p_max==NULL)
		{
			h->head = max->link;
		}
		else
		{
			p_max->link = max->link;
		}
		printf("\nThe dequeued element has priority %d and element is %s",max-> info.priority,max-> info.name);
	}
}