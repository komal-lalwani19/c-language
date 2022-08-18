#include<stdio.h>
int main()
{
	char c;
	float amt,wd,cd;
	printf("enter initial amt:");
	scanf("%f",&amt);
	printf("enter your choice: \n b for balance \n c for enquiry \n w for withdrawal\n");
	scanf(" %c",&c);
	switch(c)
	{
		case 'b':
			printf("current balance:%f",amt);
			break;
		case 'c':
			printf("enter credit amt:");
			scanf("%f",&cd);
			amt=amt+cd;
			printf("current balance:%f",amt);
			break;
		case 'w':
			printf("enter debit amt:");
			scanf("%f",&wd);
			if (wd> amt)
			printf("insufficient amt:");
			else
			{
				amt=amt-wd;
				printf("current balance: %f",amt);
			}
			break;
			default:
				printf("invalid choice");
	}
}
