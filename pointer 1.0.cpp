#include<stdio.h>
int main()
{
	int num=50;
	int *p;
	p=&num;
	printf("address of p variable is %x \n",p);
	printf("value of p varible is %d \n",*p);
	return 0;
}
