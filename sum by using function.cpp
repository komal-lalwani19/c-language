#include<stdio.h>
int sum(int n);
int main()
{
	int num,result;
	printf("enter a positive integer");
	scanf("%d",&num);
	result=sum(num);
	printf("sum=%d",result);
}
int sum(int n)
{
	if(n!=0)
	return n+sum(n-1);
	else
	return n;
}
