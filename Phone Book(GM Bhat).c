#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <errno.h>

struct directory
{
	char sr_no[5];
	char name[50];
	char phone[15];
	char email[50];
}user[5000];

int search_result[1000];

int number_of_entries=0;


int engine(char *txt , char *pat);
void display();
void add();
void search();

int main()
{
	char buffer[500];
	int choice;
	char* word;
	
	FILE* data = fopen("data.csv","r");
	if (data==NULL)
	{
		perror("ERROR MESSAGE: ");
		exit(-1);
	}
	while(fgets(buffer,500,data))
	{
		word = strtok(buffer,",");
		strcpy(user[number_of_entries].sr_no,word);
		word = strtok(NULL,",");
		strcpy(user[number_of_entries].name,word);
		word = strtok(NULL,",");
		strcpy(user[number_of_entries].phone,word);
		word = strtok(NULL,",");
		strcpy(user[number_of_entries].email,word);
		number_of_entries++;
	}
	fclose(data);
	data = fopen("data.csv","w");
	
	
	start:
	system("cls");
	printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO E PHONE BOOK\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	
	
	printf("\n1--->DISPLAY CONTACTS\n2--->DELETING CONTACTS\n3--->ADDING CONTACTS\n4--->FINDING CONTACTS\n5--->EXIT");
    printf("\nENTER YOUR CHOICE:");scanf("%d",&choice);
    if (choice==1)	
		display();
	//else if (choice==2)
		//delete();
	else if(choice==3)
		add();
	else if(choice==4)
		search();
	else if (choice ==5)
	{
		printf("THANK YOU");
		for(int i=0;i<number_of_entries;i++)
			fprintf(data,"%s,%s,%s,%s",user[i].sr_no,user[i].name,user[i].phone,user[i].email);
		fclose(data);
		exit(0);
	}
	else
		printf("INVALID CHOICE");
	goto start;
}

void display()
{
	for(int i=0;i<number_of_entries;i++)
	{
		printf("%s.\t%s\t%s\t%s",user[i].sr_no,user[i].name,user[i].phone,user[i].email);
	}
	getche();
}

void add()
{
	int n;
	printf("\nENTER THE NO OF PERSONS TO BE ADDED:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
		printf("\nEnter name:");fflush(stdin);
		scanf("%[^\n]s",user[i+number_of_entries].name);fflush(stdin);
		printf("\nEnter number:");
		scanf("%s",user[i+number_of_entries].phone);
		printf("\nEnter Email ID:");
		scanf("%s",user[i+number_of_entries].email);strcat(user[i+number_of_entries].email,"\n");
		itoa(atoi(user[i+number_of_entries-1].sr_no)+1,user[i+number_of_entries].sr_no,10);
    }
	number_of_entries += n;
	getche();
}

void search()
{
	int n,x,z=0;
	char pattern[50];
	search_start:
	printf("\n1.To Search by name\n2. TO search by phone number\n>>");scanf("%d",&n);
	if (n==1)
	{
		fflush(stdin);
		printf("Enter the name: ");scanf("%[^\n]s",pattern);fflush(stdin);
		for(int i=0;i<number_of_entries;i++)
		{
			x= engine(user[i].name , pattern);
			if (x>=0)
			{
				search_result[z]=i;
				z++;
			}
		}
	}
	else if(n==2)
	{
		printf("Enter the phone number: ");scanf("%s",pattern);
		for(int i=0;i<number_of_entries;i++)
		{
			x= engine(user[i].phone , pattern);
			if (x>=0)
			{
				search_result[z]=i;
				z++;
			}
		}
	}
	else
	{
		printf("INVALID CHOICE");fflush(stdin);
		goto search_start;
	}
	
	for(int j=0;j<z;j++)
	{
		printf("%s.\t%s\t%s\t%s",user[search_result[j]].sr_no,user[search_result[j]].name,user[search_result[j]].phone,user[search_result[j]].email);
	}
	printf("\nNo more results");
	getche();
}


int engine(char *txt , char *pat)
{
	int i = 0,j=0,x=strlen(pat),k;
	while (txt[j]!='\0')
	{
		i = 0;
		if (txt[j]==pat[i])
		{
			for (i,k = j;txt[k]==pat[i];i++,k++)
			{
				if (i==(x-1))
					return j;
				else if (i > x-1)
					break;
			}
		}
		j++;
	}
return -1;
}