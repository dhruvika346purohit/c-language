#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	printf("enter the value of radius=");
	scanf("%d",&r);
	circle(r);
}
void circle(int r)
{
	float pi=3.14,area;
	area=pi*(r*r);
	printf("area of circle is %.2f",area);
	
}
