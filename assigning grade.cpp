#include<stdio.h>
int main()
{
	int n;
	printf("enter your percentage");
	scanf("%d",&n);
	if(n>=70)
	printf("congratulations! you got A");
	else if(n>=40)
	printf("good! you got B");
	else if(n>=33)
	printf("you got C");
	else
	printf("sorry you are fail");
}
