#include<stdio.h>
#include<string.h>
int main()
{
	char s[200],rev[200];
	int length=0,i;
	printf("enter string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	length++;
	printf("reverse of string %s given:",s);
	for(i=length-1;i>=0;i--)
	printf("%c",s[i]);
}