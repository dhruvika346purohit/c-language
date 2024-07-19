#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	z=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("answer is %d",z);
	
}
