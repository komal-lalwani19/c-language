#include<stdio.h>
int main()
{
	int rollno[10]={101,102,104,107,109,112,115,116,118,119};
	int i,rno[10];
	printf("first array is given \n");
	for(i=0;i<=9;i++)
	{
		printf(" %d",rollno[i]);
		rno[i]=rollno[i];
	}
	printf("\n copied array is given: \n");
	for(i=0;i<=9;i++)
	{
		printf(" %d",rno[i]);
	}
}
