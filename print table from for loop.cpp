#include<stdio.h>
int main()
{
	int i,n;
	printf("print any no you want to print table");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
	{
		printf("%d \n",i*n);
	}
}
