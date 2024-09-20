#include<stdio.h>
#include<conio.h>
void main()
{
	int j,k,l=1;
	for(j=5;j>=1;j--)
	{
		for(k=j;k<=5;k++)
		{
			printf("%d ",l);
			l++;
		}
		printf("\n");
	}
}
