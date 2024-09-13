#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,count=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		n=n/10;
		count++;
	}
	printf("count of n is %d",count);
}
