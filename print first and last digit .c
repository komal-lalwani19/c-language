#include<stdio.h>
int main()
{
	int no,first,last;
	printf("enter any number");
	scanf("%d",&no);
	last=no%10;
	do
	{
	  first=no%10;
	  no=no/10;
	}while(no!=0);
	printf("first no of digit is %d and last no of digit is %d",first,last );
}
