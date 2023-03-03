// Using the while control structure
#include<stdio.h>
int i, j;
main()
{
	i=1;
	while (i<=3){ 
		j =1;
		while (j<=5){
			if (i==j || i+j == 6)
				printf ("*");
			else
				printf(" ");
			j++;
		}
	printf("\n");
	i++;
	}
	for (i= 1; i<3;i++)
		printf("  *\n");
	return 0;
}
