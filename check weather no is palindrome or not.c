#include<stdio.h>
int main()
{
	int no,b,rev,copy;
	printf("enter any no");
	scanf("%d",&no);
	copy=no;
	while(no!=0)
	{
		b=no%10;
		rev=rev*10+b;
		no=no/10;
	}
	if(copy==rev)
	printf("number is palindrome");
	else
	printf("number is not palindrome");
}
