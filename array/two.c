#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the size of array=");
	scanf("%d",&n);
	float avg;
	int a[n];
	printf("enter the element of array=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("average of an array is %.2f",avg);
	return 0;
}
