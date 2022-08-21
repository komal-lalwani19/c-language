#include<stdio.h>
int main()
{
	int i,b,p,f=1;
	printf("enetr base and power number");
	scanf("%d %d",&b,&p);
	for(i=1;i<=p;i++)
	{
		f=f*i;
	}
	printf("result =%d",f);

}
