#include <stdio.h>
#include <stdlib.h>
void main()
{
	char buffer[50],file_name[50];int x;
	puts("Enter file name");gets(file_name);FILE *f=fopen(file_name,"a+");
	puts("\nEnter number of lines to be written");gets(buffer);x=atoi(buffer);puts("The lines are");
	for(;x;x--){scanf("%[^\n]s",buffer);fflush(stdin);fputs(buffer,f);fputs("\n",f);}
	printf("Output:\nThe content of the file %s is\n",file_name);rewind(f);
	for(;fgets(buffer,100,f);printf("%s",buffer));fclose(f);
}