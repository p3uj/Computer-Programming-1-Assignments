// Using the for control structure
#include<stdio.h>
int i, j;
main()
{  
	for (i=1; i<=3; i++)	// row
	{  
		for (j =1; j<=5; j++)	//column
			if (i==j || i+j == 6)
				printf ("*");
			else
				printf(" ");
		printf("\n");
	}
	for (i= 1; i<3; i++)
		printf("  *\n");
	return 0;
}
