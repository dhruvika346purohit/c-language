#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,total;
	float average;
	printf("enter maths marks=");
	scanf("%d",&a);
	printf("enter science marks=");
	scanf("%d",&b);
	printf("enter english marks=");
	scanf("%d",&c);
	total=a+b+c;
	average=total/3;
	printf("average is = %.2f\n",average);
	if(average>=90 && average<=100)
	{
		printf("A+");
	}
	else if (average>=80 && average<=90)
	{
		printf("A");
	}
	else if (average>=70 && average<=80)
	{
		printf("B+");
	}
	else if (average>=60 && average<=70)
	{
		printf("B");
	}
	else if (average>=50 && average<=60)
	{
		printf("C+");
	}
	else if (average>=40 && average<=50)
	{
		printf("C");
	}
	else if (average>=33 && average<=40)
	{
		printf("D");
	}
	else 
	{
		printf("you are fail !");	
	}
}
