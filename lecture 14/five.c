//break
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		if(i>=15)
		{
			break;
		}
	}
	
}
