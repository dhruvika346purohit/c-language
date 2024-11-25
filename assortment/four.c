#include<stdio.h>
#include<conio.h>
void main()
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
	int m,n,sum1,sum2;
	printf("enter the row=");
	scanf("%d",&m);
	printf("elements of row are=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==m)
			{
				printf("%d,",a[i][j]);
				sum1+=a[i][j];	
			}
		}
	}
	printf("\n");
	printf("the sum of element of row is %d",sum1);
	printf("\n");
	printf("enter the column=");
	scanf("%d",&n);
	printf("elements of column are=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==n)
			{
				printf("%d,",a[i][j]);
				sum2+=a[i][j];	
			}
		}
	}
	printf("\n");
	printf("the sum of element of column is %d",sum2);
}
