#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "head.h"

void main()
{
	char buffer[50];char* word;
	FILE *fp=fopen("stud.csv","r");
	if(fp==NULL)
	{
		perror("ERROR REPORT:");
	}
	else{
		int z=0;
		while(fgets(buffer,50,fp))
		{
			word = strtok(buffer,",");
			info[z].r_num = atoi(word);
			word = strtok(NULL,",");
			strcpy(info[z].name,word);z++;
		}
		for(int i=0;i<15;i++)
		{
			point[i] = &info[i];
		}
		printf("Before sorting\n");
		display(z);
		int ch;
		printf("1.Sort according to name\n2.Sort According to roll number\n");scanf("%d",&ch);
		switch(ch)
		{
			case 1:sort(bubble_sort_name,z);
			break;
			case 2:sort(bubble_sort_roll,z);
			break;
		}
		printf("After sorting\n");
		display(z);
		fclose(fp);
	}
}
