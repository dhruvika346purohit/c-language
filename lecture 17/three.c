#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	for(c=4;c>=1;c--)
	{
		for(d=1;d<=c;d++)
		{
			printf("%d ",d);
		}
		printf("\n");
	}
}
