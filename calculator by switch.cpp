#include<stdio.h>
int main()
{
	char ch;
	float a,b,c;
	printf("enter two number \n");
	scanf("%f %f",&a,&b);
	printf("enter your choice: \n + for addition\n - for subtraction\n * for multiplication \n / for division \n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			c=a+b;
			printf("addition=%f",c);
			break;
		case '-':
			c=a-b;
			printf("subtraction=%f",c);
			break;	
		case '*':
			c=a*b;
			printf("multiplication=%f",c);
			break;
		case '/':
			c=a/b;
			printf("division=%f",c);
			break;	
			
		default:
			printf("invalid choice");
	}
}
