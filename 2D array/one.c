#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c;
	printf("enter the r:");
	scanf("%d",&r);
	printf("enter the c:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
