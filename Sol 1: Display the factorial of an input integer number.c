#include<stdio.h>
long int fct=1;
int i, x;
main()
{
	printf("Enter a value: ");
	scanf("%d", &x);
	for (i=1; i<=x; i++)
		fct = fct*i;
	printf("The factorial of %d is %ld ", x, fct);	// %ld is used because of the limited value range of an integer declaration
	return 0;
}
