#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=i;k>=2;k--)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}