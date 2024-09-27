#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i==1||i==3 )
		{
			for(j=1;j<=5;j++)
			{
				printf("* ");
			}	
		}
		
		printf("\n");
	}
}
