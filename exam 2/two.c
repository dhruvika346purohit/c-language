#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int min=a[i];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("minimum number from 1d array is %d\n",min);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of number of 1d array is %d",sum);
	
	
}
