#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j;
	printf("enter the value of row=");
	scanf("%d",&r);
	printf("enter the value of column=");
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
	printf("the transpose matrix of an array=\n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
