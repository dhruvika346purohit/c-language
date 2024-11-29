#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter the value of n=");
	scanf("%d",&n);
	table(n);
}
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d",n,i,n*i);
		printf("\n");
	}
}
