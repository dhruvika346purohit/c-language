#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[n],i;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
