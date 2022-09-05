#include<stdio.h>
int main()
{
int a=5,b=10,c;
int *p,*q,*r;
p=&a;
q=&b;
r=&c;
*r=*p + *q;
printf("add= %d",*r);
}
