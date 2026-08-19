// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

	int main() {
	int a,b,c;

	printf("enter three sides:");
	scanf("%d %d %d", &a,&b,&c);

	if (a==b && b==c)
	printf("equilateral triangle:");
	else if (a==b||b==c||a==c)
	printf("isosceles triangle:");
	else
	printf("scalene triangle");

	return 0;
}
