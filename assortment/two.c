#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	printf("enter the value of r=");
	scanf("%d",&r);
	printf("enter the value of c=");
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
	int lar=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(lar<a[i][j])
			{
				lar=a[i][j];
			}
		}
	}
	printf("the largest element is = %d",lar);	
}
