#include<stdio.h>
#include<conio.h>
void main()
{
	char alpha;
	printf("enter the alphabet=");
	scanf("%c",&alpha);
	switch(alpha)
	{
		case 'a':printf("%c is vowel",alpha);
		break;
		case 'e':printf("%c is vowel",alpha);
		break;
		case 'i':printf("%c is vowel",alpha);
		break;
		case 'o':printf("%c is vowel",alpha);
		break;
		case 'u':printf("%c is vowel",alpha);
		break;
		default:printf("%c is constant",alpha);
	}
}
