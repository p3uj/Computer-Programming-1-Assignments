#include<stdio.h>
int x[10], y[5];
int i, j, ctr;
main()
{  
    // Enter values for the main arrary
    printf("Enter values for the main array!\n\n");
    for (i=0; i<10; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &x[i]);
    }
    // Enter values for the subset array
    printf("\nEnter values for the subset array!\n\n");
    for (i=0; i<5; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &y[i]);
    }
    // Display array values
    printf("\nMain array values are: ");
    for (i=0; i<10; i++)
        printf("%3d", x[i]);
    printf("\n\nSubset array values are: ");
    for(i=0; i<5; i++)
        printf("%3d", y[i]);
        
    // check if second array is a subset of the main array
    for (i =0; i< 5; i++)
        for (j =0; j<10; j++)
            if ( y[i] == x[j])
                ctr ++;
    if (ctr == 5)
        printf("\nThe subset array is a subset of the main array");
    else
        printf("\nThe subset array is not a subset of the main array");
    return 0;
}
