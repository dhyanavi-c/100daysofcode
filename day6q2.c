// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

	int main(){

	int n;

	printf("enter a number:");
	scanf("%d",&n);

	if(n>=0)
	{
	if(n==0)
	{
	printf("no. is zero\n");
	}
	else
	{
	printf("no. is positive\n");
	}
	}
	else
	{
	printf("no is negative\n");
	}
	return 0;

}
