// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

	int main(){
	int a,b;

	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);

	printf("sum of two numbers=%d\n",a+b);
	printf("subtraction of two numbers=%d\n",a-b);
	printf("product of two numbers=%d\n",a*b);
	printf("quotient of two numbers=%f\n",(float)a/b);
	

	return 0;
}
