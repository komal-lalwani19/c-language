#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter any no you want upto print series");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d",c);
		a=c;
		b=c;
	}
}
