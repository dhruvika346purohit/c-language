#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c;
	printf("enter row=");
	scanf("%d",&r);
	printf("enter column=");
	scanf("%d",&c);
	int a[i][j],sum=0;
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
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("sum of diagonal element is %d",sum);
	return 0;
}
