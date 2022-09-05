#include<stdio.h>
int main()
{
	int a=5;
	int *p;
	p=&a;
	printf("value of a is %d \n",a);
	printf("address of a is %d \n",&a);
	printf("value of a is %d \n",*p);
	printf("address of a is %d \n",p);
	printf("value of p is %d \n",p);
	printf("address of p is %d \n",&p);
}
