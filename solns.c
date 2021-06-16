/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int b)
{
	int max=a[0];
	for(int i=0;i<b;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else
		{
			max=max;
		}
	}
	return max;
}

int min(int a[], int b)
{
	int min=a[0];
	for(int i=0;i<b;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		else
		{
			min=min;
		}
	}
	return min;
}

float average(int a[], int b)
{
	int n= 0;
	float avg;
	for(int i=0;i<b;i++)
	{
	n+=a[i];
	}
	avg=(float)n/b;
	printf("%f\n", avg);
	return avg;
}

int factors(int x, int a[])
{
	int count=0;
	for(int i=2;i<=x;i++)
	{
		while(x%i==0)
		{
			a[count]=i;
			count++;
			x=x/i;
		}
	}
	return count;
}

int mode(int a[], int b)
{
	int count=0, maxcount=0, mode=0; 
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(a[j]==a[i])
			{
				count++;
			}
		}
		if(count>maxcount)
		{
		maxcount=count;
		mode=a[i];
		}
	}
	return mode;
}
