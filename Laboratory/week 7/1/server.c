#include <stdio.h>
#include <string.h>
#include "head.h"


void input()
{
	for(int i =0;i<5;i++)
	{
		fflush(stdin);
		printf("Enter name, team name and  batting average for player-%d :\n",i+1);
		scanf("%[^\n]s",player[i].name);fflush(stdin);
		scanf("%[^\n]s",player[i].team_name);fflush(stdin);
		scanf("%d",&player[i].avg);
	}
}
void sort()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(strcmp(player[j].team_name,player[j+1].team_name)>0)
			{
                temp=player[j];
                player[j]=player[j+1];
                player[j+1]=temp;
            }
        }
    }
}

void display()
{
	int i;
    printf("List of players after team wise sorting are\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t%s\t\t%d\n",player[i].name,player[i].team_name,player[i].avg);
    }
}

