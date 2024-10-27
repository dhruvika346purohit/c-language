#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c,sum=0;
	float avg;
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
		}
	}
	avg=sum/(r*c);
	printf("average of 2D array is %f",avg);
	return 0;
}
