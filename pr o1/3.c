#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3,triangle;
	printf("enter angle 1=");
	scanf("%d",&a1);
	printf("enter angle 2=");
	scanf("%d",&a2);
	triangle=180;
	a3=triangle-(a1+a2);
	printf("angle 3 is %d",a3);
}
