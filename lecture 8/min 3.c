#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	(a<b)?(a<c)?printf("a is minimum"):printf("c is minimum"):(b<c)?printf("b is minimum"):printf("c is minimum");
}
