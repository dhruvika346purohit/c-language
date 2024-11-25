#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,choice,start;
	start:
	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for % \n");
	printf("press 0 for exit\n");
	printf("enter your choice=");
	scanf("%d",&choice);
	if(choice==0)
	{
		printf("program is over!!");
	}
	else
	{
	printf("enter the first number=");
	scanf("%d",&a);
	printf("enter the second number=");
	scanf("%d",&b);
	switch(choice)
	{
		case 1:add(a,b);
		goto start;
		break;
		case 2:sub(a,b);
		goto start;
		break;
		case 3:mul(a,b);
		goto start;
		break;
		case 4:div(a,b);
		goto start;
		break;
		case 5:modul(a,b);
		goto start;
		break;
	}
}
}
int add(int a,int b)
{
	printf("addition of %d and %d is %d\n",a,b,a+b);
}
int sub(int a,int b)
{
	printf("substraction of %d and %d is %d\n",a,b,a-b);
}
int mul(int a,int b)
{
	printf("multiplication of %d and %d is %d\n",a,b,a*b);
}
int div(int a,int b)
{
	printf("division of %d and %d is %d\n",a,b,a/b);
}
int modul(int a,int b)
{
	printf("modul of %d and %d is %d\n",a,b,a%b);
}
