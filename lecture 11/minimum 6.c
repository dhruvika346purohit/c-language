#include<stdio.h>

void main()
{
	int a,b,c,d,e,f;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter e:");
	scanf("%d",&e);
	printf("enter f:");
	scanf("%d",&f);
	
	if(a<b)//a,c,d,e,f
	{
		if(a<c)//a,d,e,f
		{
			if(a<d)//a,e,f
			{
				if(a<e)//a,f
				{
					if(a<f)//a
					{
						printf("a is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
			else//d,e,f
			{
				if(d<e)//d,f
				{
					if(d<f)//d
					{
						printf("d is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
		}
		else//c,d,e,f
		{
			if(c<d)//c,e,f
			{
				if(c<e)//c,f
				{
					if(c<f)//c
					{
						printf("c is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
			else//d,e,f
			{
				if(d<e)//d,f
				{
					if(d<f)//d
					{
						printf("d is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
		}
	}
	else//b,c,d,e,f
	{
		if(b<c)//b,d,e,f
		{
			if(b<d)//b,e,f
			{
				if(b<e)//b,f
				{
					if(b<f)//b
					{
						printf("b is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
			else//d,e,f
			{
				if(d<e)//d,f
				{
					if(d<f)//d
					{
						printf("d is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
		}
		else//c,d,e,f
		{
			if(c<d)//c,e,f
			{
				if(c<e)//c,f
				{
					if(c<f)//c
					{
						printf("c is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
			else//d,e,f
			{
				if(d<e)//d,f
				{
					if(d<f)//d
					{
						printf("d is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
				else//e,f
				{
					if(e<f)//e
					{
						printf("e is minimum");
					}
					else//f
					{
						printf("f is minimum");
					}
				}
			}
		}
	}
	
}
