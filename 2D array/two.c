#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j;
	printf("enter r:");
	scanf("%d",&r);
	printf("enter c:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[r][c]);
		}
		printf("\n");
	}
	printf("length of 2D array row is %d and column is %d",r,c);
	return 0;
}
