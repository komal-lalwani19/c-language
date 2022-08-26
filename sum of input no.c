#include<stdio.h>
int main()
{
	int no,b,sum=0;
	printf("enter any number");
	scanf("%d",&no);
	while(no!=0)
	{
		b=no%10;
		sum=sum+b;
		no=no/10;
	}
	printf("the sum of digit is %d",sum);
}
