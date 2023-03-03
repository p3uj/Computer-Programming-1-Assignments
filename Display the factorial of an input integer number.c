#include<stdio.h>
int num, i;
int factorial = 1;
int main()
{
	printf("Enter a number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
		factorial*=i;
	printf("The factorial of %d is %d ", num, factorial);
	return 0;
}
