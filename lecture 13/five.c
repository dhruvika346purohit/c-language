//wap factorial of 1 to n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,fact=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	do 
	{
		fact=fact*n;
		n--;
	}while(n>=i);
	printf("factorial is %d",fact);	
}
