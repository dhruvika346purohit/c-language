//goto
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	one:
	printf("hello world\n");
	i++;
	if(i<=n)
	{
	goto one;	
	}
}
