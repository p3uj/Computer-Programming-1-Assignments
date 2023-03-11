#include<stdio.h>
int x[10], y[5];
int i, j, ctr, msub, ssub;
char ans, sagot;
main()
{ 
    // Enter values for the main arrary
    printf("Enter values for the main array!\n\n");
    printf("How many values will you enter ( 1-10)?  ");
    scanf("%d", &msub);
    for (i=0; i< msub; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &x[i]);
    }
    // Enter values for the subset array
    printf("\nEnter values for the subset array!\n\n");
    printf("How many values will you enter ( 1-5)?  ");
    scanf("%d", &ssub);
    for (i=0; i<ssub; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &y[i]);
    }
    // Display array values
    printf("\nMain array values are: ");
    for (i=0; i<msub; i++)
        printf("%3d", x[i]);
    printf("\n\nSubset array values are: ");
    for(i=0; i<ssub; i++)
        printf("%3d", y[i]);
    ctr = 0;
    // check if second array is a subset of the main array
    for (i =0; i< ssub; i++)
        for (j =0; j<msub; j++)
            if ( y[i] == x[j])
                    ctr ++;
    if (ctr == ssub)
        printf("\n\nThe subset array is a subset of the main array");
    else
        printf("\n\nThe subset array is not a subset of the main array");
    return 0;
}
