#include <stdio.h>
#include <string.h>
int loc(char *txt , char *pat);
int main()
{
	char txt[1000], pat[100];
	printf("Enter the text: ");
	scanf("%[^\n]s",txt);
	fflush(stdin);
	printf("Enter the pattern: ");
	scanf("%[^\n]s",pat);
	int x = loc(txt , pat);
	if (x>= 0)
		printf("Pattern found at index location %d",x);
	else 
		printf("Pattern Not found");
}

int loc(char *txt , char *pat)
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