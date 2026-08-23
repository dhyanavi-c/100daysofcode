// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

	int main() {
	int i,n,sum=0;

	printf("enter the value of n:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++) {
	sum=sum+ (2*i-1);
}
	printf("sum of first %d odd numbers=%d",n,sum);

	return 0;
}

