#include<stdio.h>
int x[10], hi, low, i;
main()
{  
    for (i=0;i<10;i++)
    {  
        printf("Enter an integer value: ");
        scanf("%d", &x[i]);
    }
    //printing array values
    printf("\n\nThe array values are: ");
    for (i=0; i<10; i++)
        printf("%3d", x[i]);
    
    hi = x[0];
    low = x[0];
    for (i=1; i<10; i++)
    { 
        if (x[i] < low)
            low = x[i];
        if (x[i] > hi)
            hi = x[i];
    }
    printf("\nThe lowest value in the list is %d\n", low);
    printf("The highest value in the list is %d\n", hi);
    return 0;
}
