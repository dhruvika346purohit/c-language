#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);
	
	if(a<b)//a,c
	{
		if(a<c)//a
		{
			printf("a is lower");	
		}
		else//c
		{
			printf("c is lower");
		}
	}
	else//b,c
	{
		if(b<c)//b
		{
			printf("b is lower");
		}
		else//c
		{
			printf("c is lower");
		}
	}
}
