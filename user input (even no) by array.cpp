#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter array element:\n");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	printf("even no in given array");
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		printf(" %d",a[i]);
	}
}  
