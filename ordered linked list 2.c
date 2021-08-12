#include <stdio.h>
#include <stdlib.h>

typedef struct sample
{
	int info;
	struct sample* link;
}S;

typedef struct head
{
	S* head;
}H;

void insert(H* h,int x);
void display(H* h,int n);

int main()
{
	int x;H h;
	h.head = NULL;
	printf("Enter number of elements\n");int n;scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element %d: ",i+1);scanf("%d",&x);
		insert(&h,x);
	}
	display(&h,n);
}

void insert(H* h,int x)
{
	
	S *temp = (S*)malloc(sizeof(S));
	temp->info = x;temp->link= NULL;
	S *prev = NULL,*pres = h->head;
	while(pres!= NULL && x > pres->info)
	{
		prev = pres;
		pres = pres -> link;
	}
	if(prev==NULL)
	{
		h->head = temp;
		temp -> link = pres;
	}
	else
	{
		prev->link = temp;
		temp->link = pres;
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