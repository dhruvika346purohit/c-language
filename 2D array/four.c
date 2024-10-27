#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j;
	printf("enter the row=");
	scanf("%d",&r);
	printf("enter the column=");
	scanf("%d",&c);
	int a[r][c],b[r][c];
	printf("the element of a=");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("the element of b=");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	int d[r][c];
	printf("addition of element a and b=");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
