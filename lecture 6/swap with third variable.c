#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a after swap=%d\n",a);
	printf("b after swap=%d",b);
}
