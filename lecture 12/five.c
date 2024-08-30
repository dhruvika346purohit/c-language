//print leap year
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the starting year=");
	scanf("%d",&a);
	printf("enter the ending year=");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d ",a);
		}
		a++;
	}
}


