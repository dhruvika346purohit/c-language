//Develop a Program to find the sum of a number's first and last digits.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,first,last,sum;
	printf("enter the value of n=");
	scanf("%d",&n);
	last=n%10;
	while(n>10)
	{
		n=n/10;	
	}
	
	first=n;
	sum=first+last;
	printf("sum of first and last is %d",sum);

}
