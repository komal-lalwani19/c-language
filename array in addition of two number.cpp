#include<stdio.h>
int main()
{
	int a[50],b[50],c[50],n,i;
	printf("enter how many elements you want to enter in array:\n ");
	scanf("%d",&n);
	
	printf("enter %d element of first array element:\n");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	
	printf("enter %d element of second array element:\n");
	for(i=0;i<=4;i++)
	scanf("%d",&b[i]);
	
	printf("addition to two array element:\n");
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]+b[i];
		printf(" %d",c[i]);
	}
}
