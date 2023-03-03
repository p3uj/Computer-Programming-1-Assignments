// Using the while control structure
#include<stdio.h>
int i, j;
main()
{  
	i=1;					// initial value i
	while (i<=5)			// conditional test of i
	{
		j=1;				// initial value of j
		while (j<=i)		// conditional test of j
		{
			printf("*");
			j++;			// auto increment of j
		}
		printf("\n");
		i++;				// auto increment of i
	}
	return 0;
}
