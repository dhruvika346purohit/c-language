#include<stdio.h>
#include<conio.h>
void main()
{
	int BS,HRA,DA,TA,GS;
	printf("enter the base salary=");
	scanf("%d",&BS);
	printf("enter the HRA=");
	scanf("%d",&HRA);
	HRA=(BS*HRA)/100;
	printf("enter the DA=");
	scanf("%d",&DA);
	DA=(BS*DA)/100;
	printf("enter the TA=");
	scanf("%d",&TA);
	TA=(BS*TA)/100;
	GS=BS+HRA+DA+TA;
	printf("gross salary=%d",GS);
}
