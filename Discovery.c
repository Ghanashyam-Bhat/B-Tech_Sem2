#include <stdio.h>
int main()
{
	int arr[10][12]={[5][8]=100,[2][3]=10};
	printf("%d , %d" , arr[5][8],arr[2][3]);
}


#include <stdio.h> 
int main()
{ 
	char ar[50][500]={{'G','h','a','n','a','s','h','y','a','m','\0'},{'B','h','a','t','\0'}};
	char (*p)[500] = ar;
	//printf("%s",*(*(p+0)+0));
	printf("%s\n",*p);
	
	printf("%c",*(*(p+1)+0));
	
	printf("%s",(*(p+1)+0));
	printf("%s",*++p);
}

