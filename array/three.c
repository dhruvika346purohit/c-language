#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[n],b[n],c[n];
	printf("enter the size of array=");
	scanf("%d",&n);
	printf("enter the element of a=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter the element of b=\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	printf("array c is :\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("c[%d]=",i);
		printf("%d",c[i]);
		printf("\n");
	}
}
