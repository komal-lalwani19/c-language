#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("enter first array element:\n");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	
	printf("enter second array element:\n");
	for(i=0;i<=4;i++)
	scanf("%d",&b[i]);
	
	printf("addition to two array element:\n");
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]+b[i];
		printf(" %d",c[i]);
	}
}
