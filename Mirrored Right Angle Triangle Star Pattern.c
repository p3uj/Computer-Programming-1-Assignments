#include<stdio.h>
int i, j;
int main()
{
	for (i=1; i<=5; i++){       // It will loop as long as the value of i is less than or equal to 5 (Outer loop)
        for (j=1; j<=i; j++)    // It will loop as long as the value of j is less than or equal to i (Inner loop)
            printf("*");        // End
        printf("\n");           //
    }                           // End
    return 0;
}
