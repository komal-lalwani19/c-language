#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("entered number of elements: %d\n",n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("memory not allocate.\n");
		exit(0);
	}
	else{
		printf("memory successfully.\n");
		for(i=0;i<n;i++){
			ptr[i]=i+1;
		}
		printf("the elements of the array are:");
		for(i=0;i<n;++i){
			printf("%d,",ptr[i]);
		}
	}
	return 0;
}