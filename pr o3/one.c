//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	char n='A';
	do
	{
		printf("%c ",n);
		n+=4;
	}while(n<='z');
}
