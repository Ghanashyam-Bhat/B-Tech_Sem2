struct component
{
	int priority;
	int details;
};

typedef struct component COMP;
struct node	

{
	COMP c;
	struct node* link;
};

typedef struct node NODE;

struct priority_queue
{
	NODE* head;
};

typedef struct priority_queue HEAD;

void initialize(HEAD*); 
void enqueue(HEAD*, COMP*);
void dequeue(HEAD*);
void display(HEAD*);
