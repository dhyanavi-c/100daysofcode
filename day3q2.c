// Write a program to swap two numbers using a third variable.

#include <stdio.h>

	int main(){
	int a,b,c;

	printf("enter two numbers:");
	scanf("%d%d",&a,&b);

	c=a;
	a=b;
	b=c;

	printf("after swapping:");
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	return 0;
}
