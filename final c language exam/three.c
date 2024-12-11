#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	printf("enter the row=");
	scanf("%d",&r);
	printf("enter the column=");
	scanf("%d",&c);
	int a[r][c];
	printf("element of a is=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int b[r][c];
	printf("element of b is=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int sum[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("element of sum of a and b is=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
