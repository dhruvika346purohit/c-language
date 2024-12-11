#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a is %d\n",a);
	printf("after swapping b is %d",b);
}
