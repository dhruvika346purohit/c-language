#include<stdio.h>

void main()
{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	
	if(a>b)//a,c,d
	{
		if(a>c)//a,d
		{
			if(a>d)//a
			{
				printf("a is maximum");
			}
			else//d
			{
				printf("d is maximum");
			}
		}
		else //c,d
		{
			if(c>d)//c
			{
				printf("c is maximum");
			}
			else//d
			{
				printf("d is maximum");
			}
		}
	}
	else//b,c,d
	{
		if(b>c)//b,d
		{
			if(b>d)//b
			{
				printf("b is maximum");
			}
			else//d
			{
				printf("d is maximum");
			}
		}
		else//c,d
		{
			if(c>d)//c
			{
				printf("c is maximum");
			}
			else//d
			{
				printf("d is maximum");
			}
		}
	}
}
