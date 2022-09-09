#include<stdio.h>
int main()
{
	int a[50],i,n,max;
	printf("enter how many elements in array:");
	scanf("%d",&n);
	printf("enter elements in array:\n");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for (i=0;i<n;i++)
	{
		if (max<a[i])
		max=a[i];
	}
	printf("maximum, value of array :%d",max);
}
