#include<stdio.h>
int main()
{
	int rollno[10]={101,102,104,107,109,112,115,116,118,119};
	int i,r,f=0;
	printf("enter your roll no to search \n");
	scanf("%d",&r);
	for(i=0;i<=9;i++)
	{
		if(r==rollno[i])
		{
			printf("roll no found ,your roll no is %d",rollno[i]);
			f=1;
		}
	}
	if(f==0)
	printf("roll no not found");
}
