#include<stdio.h>
int main()
{
	char c;
	float amt,wd,cd,n;
	printf("enter initial amt:");
	scanf("%f",&amt);
	do
	{
	printf("enter your choice: \n b for balance \n c for enquiry \n w for withdrawal\n");
	scanf(" %c",&c);
	switch(c)
	{
		case 'b':
			printf("current balance:%f\n",amt);
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
printf("do you want to continue \n 1 for yes \n 2 for no\n");
scanf("%d",&n);
}while(n==1);
}
