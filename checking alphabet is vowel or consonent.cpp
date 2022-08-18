#include<stdio.h>
int main()
{
	char h;
	printf("enter any alphabet \n");
	scanf("%c",&h);
	if(h=='a'||h=='e'||h=='i'||h=='0'||h=='u')
	printf("alphabet is vowel");
	else
	printf("alphabet is consonent");
}
