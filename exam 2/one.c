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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("array is=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("reverse array is=\n");
	for(i=r-1;i>=0;i--)
	{
		for(j=c-1;j>=0;j--)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
}
