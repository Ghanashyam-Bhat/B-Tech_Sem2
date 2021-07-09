#include <stdio.h>
#include <errno.h>
void main()
{
	char file_name[50],content[100];
	printf("Enter 1st file name: ");scanf("%s",file_name);FILE *f1=fopen(file_name,"r");
	printf("Enter 2nd file name: ");scanf("%s",file_name);FILE *f2=fopen(file_name,"r");
	if(f1==NULL||f2==NULL)perror("ERROR:");
	else{printf("Enter the new file name to merge the two files: ");scanf("%s",file_name);FILE *f3=fopen(file_name,"w+");
	for(;fgets(content,100,f1);fputs(content,f3));fclose(f1);fseek(f3,0,2);
	for(;fgets(content,100,f2);fputs(content,f3));fclose(f2);rewind(f3);printf("\n");
	for(;fgets(content,100,f3);puts(content));fclose(f3);}
}