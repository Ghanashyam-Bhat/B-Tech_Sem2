#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sample
{
	char info[50];
	struct sample* link;
}S;

typedef struct head
{
	S* head;
}H;

void input(S* p,int n);
void display(S* p,int n);

int main()
{
	int n=5;
	H start;
	start.head = (S*)malloc(sizeof(S));
	input(start.head,n);
	display(start.head,n);
}

void input(S* p,int n)
{
	int i=0;
	while (i<n)
	{
		fflush(stdin);
		scanf("%[^\n]s",p-> info);
		p->link =  (S*)malloc(sizeof(S));
		p = p->link;
		i++;
	}
	p->link = NULL;
}

void display(S* p,int n)
{
	int i=0;
	while (i<n)
	{
		printf("%d %s\n",i+1,p-> info);
		p = p->link;
		i++;
	}
}