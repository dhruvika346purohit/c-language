#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	printf("enter the row: ");
	scanf("%d",&r);
	printf("enter the column: ");
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
	printf("negative element from array is :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<0)
			{
				printf("%d,",a[i][j]);
			}
		}
	}
}
