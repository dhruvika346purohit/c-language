#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter the number :");
	scanf("%d",&a);
	if(a<0)
	{
		printf("number is negative");
	}
	else if(a==0)
	{
		printf("number is neutral");
	}
	else
	{
		printf("number is positive");
	}
}
