#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any number you want upto print natural number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
		sum=sum+i;
	}
	printf("sum of natural number is %d",sum);
}
