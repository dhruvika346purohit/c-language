//wap sum of 1 to n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of 1 to %d is %d",n,sum);
}