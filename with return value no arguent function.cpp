#include<stdio.h>
float area(float h,float w)
{
	float area;
	area=h*w;
	return area;
}
int main()
{
	printf("area of rec=%f",area(12.5,10.6));
}
