#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)//D
	{
		for(j=1;j<=5;j++)
		{
			if(j==1)
			{
				printf("* ");
			}
			else if (i==1 && j!=5)
			{
				printf("* ");
			}
			else if (i==5 && j!=5)
			{
				printf("* ");
			}
			else if (i==2 && j==5)
			{
				printf("* ");
			}
			else if (i==3 && j==5)
			{
				printf("* ");
			}
			else if (i==4 && j==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//H
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || i==3 || j==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//R
	{
		for(j=1;j<=5;j++)
		{
			if(j==1)
			{
				printf("* ");
			}
			else if (i==1 && j!=5)
			{
				printf("* ");
			}
			else if (i==2 && j==5)
			{
				printf("* ");
			}
			else if (i==3 && j!=5)
			{
				printf("* ");
			}
			else if (i==4 && j==3)
			{
				printf("* ");
			}
			else if (i==5 && j==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//U
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 && i!=5)
			{
				printf("* ");
			}
			else if (j==5 && i!=5)
			{
				printf("* ");	
			}
			else if(i==5 && j==2)
			{
				printf("* ");
			}
			else if(i==5 && j==3)
			{
				printf("* ");
			}
			else if(i==5 && j==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//V
	{
		for(j=1;j<=9;j++)
		{
			if((i==1 && j==1) || (i==1 && j==9))
			{
				printf("*");
			}
			else if((i==2 && j==2) || (i==2 && j==8))
			{
				printf("*");
			}
			else if((i==3 && j==3) || (i==3 && j==7))
			{
				printf("*");
			}
			else if((i==4 && j==4) || (i==4 && j==6))
			{
				printf("*");
			}
			else if(i==5 && j==5) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//I
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5 || j==3)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//K
	{
		for(j=1;j<=5;j++)
		{
			if(j==1)
			{
				printf("* ");	
			}
			else if(i==1 && j==4)
			{
				printf("* ");	
			}
			else if(i==2 && j==3)
			{
				printf("* ");	
			}
			else if(i==3 && j==2)
			{
				printf("* ");	
			}
			else if(i==5 && j==4)
			{
				printf("* ");	
			}
			else if(i==4 && j==3)
			{
				printf("* ");	
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)//A
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 || j==1 || j==5 || i==3)
			{
				printf("* ");
			}
			
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
