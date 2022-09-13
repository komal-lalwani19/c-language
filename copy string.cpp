#include<stdio.h>
#include<string.h>
int main()
{
	char name[200]="KOMAL";
	char n1[200]="";
	printf("%d\n",strlen(name));
	strcpy(n1,name);
	puts(n1);
    puts(name);
}
