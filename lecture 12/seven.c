//WAP to print thr multiplication table of N using while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,mul;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d * %d = %d\n",n,i,mul);
	}
}
