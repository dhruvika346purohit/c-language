#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[n],i;
	printf("enter the size of array=");
	scanf("%d",&n);
	printf("enter the element of array=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("length of array is %d",n);
	
	return 0;
}
