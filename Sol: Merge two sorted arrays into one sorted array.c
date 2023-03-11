#include<stdio.h>
int x[5], y[5], z[10];
int i, j, temp;
main()
{  
    printf("Enter values in the first array\n");
    for (i=0; i<5; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &x[i]);
    }
    //sort
    for (i=0; i<4; i++)
        for(j=i+1; j<5; j++)
            if (x[i] > x[j])
            {  
                temp = x[i];
                x[i] = x[j];
                x[j] =temp;
            }
    printf("\n\nEnter array values in the second array\n");
    for (i=0; i<5; i++)
    {
        printf("Enter an integer value: ");
        scanf("%d", &y[i]);
    }
    //sort
    for (i=0; i<4; i++)
        for(j=i+1; j<5; j++)
            if (y[i] > y[j])
            {  
                temp = y[i];
                y[i] = y[j];
                y[j] =temp;
            }
    // Transfer the values of the two arrays to the merge array
    i=0;
    for (j =0; j<5; j++)
    { 
        z[i] = x[j];
        i++;
    }
    for (j =0 ; j< 5; j++)
    { 
        z[i] = y[j];
        i++;
    }
    printf("Merged Array\n\n");
    for (i =0; i<10; i++)
        printf("%3d", z[i]);
        
    //sortthe merged array
    for (i=0; i<9; i++)
        for(j=i+1; j<10; j++)
            if (z[i] > z[j])
                {  
                    temp = z[i];
                    z[i] = z[j];
                    z[j] =temp;
                }
    //printing the array values
    printf("\nThe Sorted Merged Array\n\n");
    for (i=0; i<10; i++)
        printf("%3d", z[i]);
    return 0;
}
