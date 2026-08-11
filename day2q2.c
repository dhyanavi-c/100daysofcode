// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14
	int main(){
	float radius,area,circumference;

	printf("enter radius: ");
	scanf("%f",&radius);

	area=PI*radius*radius;
	circumference=2*PI*radius;

	printf("area of circle=%.2f\n",area);
	printf("circumference of circle=%.2f\n",circumference);

	return 0;
}
