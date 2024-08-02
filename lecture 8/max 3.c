#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)? (a>c)?printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}
