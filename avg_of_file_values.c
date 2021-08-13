#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

float avg(float *a,int x);
float max(float *a,int x);
float min(float *a,int x);
float final(float *a,int x,float (*fun)(float *,int)) ;

void main()
{
	FILE* fp = fopen("sensor1.txt","r");
	if(fp)
	{
		int n,x=0;float a[100],b[100];
		fscanf(fp,"%d",&n);
		while(fscanf(fp,"%f %f",&a[x],&b[x])!=EOF && x<n)
		{
			x++;
		}
		for(int i=0;i<x;i++)
		{
			printf("%f\t%f\n",a[i],b[i]);
		}
		printf("Minimum sensor reading: %f\nMaximum sensor reading: %f\nAverage sensor reading: %f\n",final(b,x,min),final(b,x,max),final(b,x,avg));
		
		fclose(fp);
	}
	else
	{
		perror("Error Message: ");
	}
}

float final(float *a,int x,float (*p)(float *,int)) 
{
	return p(a,x);
}

float min(float *a,int x)
{
	float m=a[0];
	for(int i=1;i<x;i++)
	{
		if(a[i]<m)
		{
			m=a[i];
		}
	}
	return m;
}

float max(float *a,int x)
{
	float m=a[0];
	for(int i=1;i<x;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	return m;
}

float avg(float *a,int x)
{
	float m=0;
	for(int i=0;i<x;i++)
	{
		m+=a[i];
	}
	return m/x;
}