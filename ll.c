#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    int priority;
    struct node* link; 
}Node;

typedef struct head_h{
    Node* head;
}Head;

void insert_node(Head* h)
{
    int x,y;
	printf("Enter value and priority: ");
    scanf("%d %d",&x,&y);
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = x;
    new_node->priority = y;
    Node* temp = h->head;
    h->head = new_node;
    new_node->link = temp;
}

int delete_node(Head* h)
{
    Node* max = h->head,*p_max=NULL,*pres = h->head,*prev=NULL;
	if (pres==NULL)
		printf("No Elements\n");
    while(pres)
    {
        if(pres->priority<max->priority)
        {
            max = pres;
            p_max = prev;
        }
        prev = pres;
        pres = pres->link;
    }
	if (p_max!=NULL)
		p_max->link = max->link;
	else
		h->head = max->link;
    return max->value;
}

void display_node(const Head* h)
{
    Node* pres = h->head;
	if (pres==NULL)
		printf("No Elements\n");
    while(pres)
    {
        printf("%d %d\n",pres->value,pres->priority);
        pres = pres->link;
    }
}


int main()
{
    int n;
    Head h;
    h.head = NULL;
    int exit_n = 1;
    do
    {
		printf("Enter the option 1,2,3,4: ");
        scanf("%d",&n);
        switch(n){
            case 1:insert_node(&h);
            break;
            case 2:delete_node(&h);
            break;
            case 3:display_node(&h);
            break;
            case 4:exit_n = 0; 
            break;
        }
    }while(exit_n);
}