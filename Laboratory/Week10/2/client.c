#include<stdio.h>
int main(int arg,char *files[])
{
	FILE *fs,*ft;
	int ch;
	if(arg!=3)
	{
		printf("invalid number of arguments");
		return 1;
	}
	fs=fopen(files[1],"r");
	if(fs==NULL)
	{
		printf("can't find the source file.");
		return 1;
	}
	ft=fopen(files[2],"w");
	if(ft==NULL)
	{
		printf("can't open the target file");
		fclose(fs);
		return 1;
	}
	while(1)
	{
		ch = fgetc(fs);
		if(feof(fs))
		break;
		fputc(ch,ft);
	}
	fclose(fs);
	return 0;
}