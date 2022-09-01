#include<stdio.h>
float area(float*h,float*w)
{
	float area;
	area=*h * *w;
	return area;
}
int main()
{
	float height,width;
	printf("enter height nd width:");
	scanf("%f %f",&height,&width);
	printf("area of rectangle=%f",area(&height,&width));
}
