#include<stdio.h>
#include<conio.h>

void main()
{
	int i,p,t,si;
	printf("enter the principal=");
	scanf("%d",&p);
	printf("enter the interest=");
	scanf("%d",&i);
	printf("enter the time=");
	scanf("%d",&t);
	si=p*i*t/100;
	printf("simple interest is %d",si);
}
