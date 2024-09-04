//WAP to calculate the factorial of N using while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	while(n>=1)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial of %d",fact);
}
