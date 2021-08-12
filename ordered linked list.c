#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sample
{
	int info;
	struct sample* link;
}S;

typedef struct head
{
	S* head;
}H;

void input(H* h,int n);
void display(H* h,int n);

int main()
{
	printf("Enter elements\n");
	int n=5;
	H start;
	start.head = NULL;
	input(&start,n);
	display(&start,n);
}

void input(H* h,int n)
{
	S *p,*prev;;
	int i=0;
	int* x = (int *)malloc(sizeof(int));
	while (i<n)
	{
		prev=NULL;
		p = h->head;
		fflush(stdin);
		scanf("%d",x);
		while(p !=NULL)
		{
			if(*x<(p->info))
				break;
			prev=p;
			p = p->link;
		}
		if(h->head ==NULL||prev==NULL)
		{
			prev = h->head;
			h->head = (S*)malloc(sizeof(S));
			h->head->info = *x;
			h->head->link = prev;
		}
		else
		{
			prev->link = (S*)malloc(sizeof(S));
			prev->link->info = *x;
			prev->link->link=p;
		}
		i++;
	}
}

void display(H* h,int n)
{
	printf("\n");
	S* p = h->head;
	int i=0;
	while (i<n)
	{
		printf("%d\t",p-> info);
		p = p->link;
		i++;
	}
}