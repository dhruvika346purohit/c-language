#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	printf("enter the value of celsius=");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("fahrenheit is %.2f",f);
	//°F = (9/5 × °C) + 32
}
