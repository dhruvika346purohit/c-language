#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	char grade;
	printf("enter your marks=");
	scanf("%d",&marks);
	grade= (marks>=90 && marks<=100)?'A'
	:(marks>=80 && marks<90)?'B'
	:(marks>=70 && marks<80)?'C'
	:(marks>=60 && marks<70)?'D'
	:(marks>=40 && marks<60)?'E'
	:'F';
	
	printf("your grade is %c\n",grade);
	
	switch(grade)
	{
		case'A':printf("excellent work!\n");
		break;
		case'B':printf("well done.\n");
		break;
		case'C':printf("good job.\n");
		break;
		case'D':printf("you passed but you could do better.\n");
		break;
		case'E':printf("just passed.\n");
		break;
		case'F':printf("sorry,you failed.\n");
		break;
		
	}
	if(grade>='A'&& grade<='E')
	{
		printf("you are eligible for next level!");
	}
	else
	{
		printf("you are not eligible for next level!");
	}
	
}
