#include<stdio.h>
#include<string.h>
int main()
{
	char s[200],rev[200];
	int count=0,i;
	printf("enter string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=65 && s[i]<=90 ||s[i]<=90 && s[i]>=122))
		{
		}
		else if (s[i]>=48 && s[i]<=57)
		{
		}
		else count ++;
	}
	printf("total special symbol=%d",count);
}