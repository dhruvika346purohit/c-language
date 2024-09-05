//continue
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==10)
		{
			continue;
		}
		printf("%d ",i);
	}
}
