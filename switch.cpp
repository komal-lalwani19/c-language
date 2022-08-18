#incude<stdio.h>
int main()
{
	int ch;
	printf("enter your choice: \n");
	scanf("%c"&ch);
	switch(ch);
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;	
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;	
		case 6:
			printf("saturday");
			break;	
		case 7:
			printf("sunnday");
			break;
		default:
		printf("invalid choice !!!")	
	}
}
