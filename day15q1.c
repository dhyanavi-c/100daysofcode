// Write a program to calculate the factorial of a number.

 #include <stdio.h>

	int main() {
	int n, i;
	long long fact = 1;

	printf("enter a number: ");
	 scanf("%d",&n);

	if(n < 0) {
	printf("factorial of a negative number does not exist.");
} else {
	for (i=1; i <= n; i++) {
	fact = fact*i;
	}
	printf("factorial of %d = %lld",n,fact);
}
	return 0;
}

