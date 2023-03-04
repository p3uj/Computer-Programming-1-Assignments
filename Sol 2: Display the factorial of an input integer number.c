// Using a different output layout
#include<stdio.h>
long int fct=1;
int i, x;
main()
{ 
	printf("Enter a value: ");
	scanf("%d", &x);
	for (i=1; i<=x; i++){ 
		if (i == x)
			printf ("%d = ", i);
		else
			printf("%d x ", i);
		fct = fct*i;
	}
	printf("%ld", fct);
	return 0;
}
