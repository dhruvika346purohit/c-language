#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		for(l=i;l<5;l++)
		{
			printf("  ");
		}
		for(m=i;m>=1;m--)
		{
			printf("%d ",m);
		}
	
		printf("\n");
	}
}
