#include<stdio.h>
int main()
{
	int a[50],n,i,key,first,last,mid;
	int f=0;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter %d element of array one by one :\n",n);
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	printf("/n enter key you want to search:");
	scanf("%d",&key);
	first=0;
	last=n-1;
	
	while (first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			f=1;
			break;
		}
		else if(a[mid]<key)
		   first=mid+1;
		else
		last=mid-1;
	}
	if(f==1)
	printf("data fount at %d position",mid+1);
	else
	printf("not found");
}
