// Using bubble, shell, and balloon sorting techniques
#include<stdio.h>
int array1[5], array2[5], merge[10];
int i, j = 5, noex = 1, temp, gap = 5/2, k;
int main()
{
    printf("Enter an integer elements for first array:\n");
    for (i = 0; i < 5; i++){            // To input the integer elements for first array
        scanf("%d", &array1[i]);        //
        merge[i] = array1[i];           //
    }                                   // End

    printf("Enter an integer elements for second array:\n");
    for (i = 0; i < 5; i++){            // To input the integer elements for second array
        scanf("%d", &array2[i]);        //
        merge[j] = array2[i];           //
        j++;                            //
    }                                   // End
    // Using Bubble sort
    while (noex > 0){                       // Sorting process for the first array
        noex = 0;                           //
        for (i = 0; i != 4; i++){           //
            if (array1[i] > array1[i+1]){   //
                temp = array1[i];           //
                array1[i] = array1[i+1];    //
                array1[i+1] = temp;         //
                noex++;                     //
            }                               //
        }                                   //
    }                                       // End
    // Using Shell sort
    while (gap > 0){                                // Sorting process for the second array
        do                                          //
        {   noex = 0;                               //
            for (i = 0; i != 5-gap; i++){           //
                if (array2[i] > array2[i+gap]){     //
                    temp = array2[i];               //
                    array2[i] = array2[i+gap];      //
                    array2[i+gap] = temp;           //
                    noex++;                         //
                }                                   //
            }                                       //
        } while (noex > 0);                         //
        gap = gap/2;                                //
    }                                               // End
    // Using Balloon sort
    for (i = 0; i < 9; i++)             // Sorting process for merge two arrays
        for (k = i+1; k < 10; k++)      //
            if (merge[i] > merge[k]){   //
                temp = merge[i];        //
                merge[i] = merge[k];    //
                merge[k] = temp;        //
            }                           // End

    printf("First array sorted: ");     // To display the first array sorted
    for (i = 0; i < 5; i++)             //
        printf("%d ", array1[i]);       // End

    printf("\nSecond array sorted: ");  // To display the second array sorted
    for (i = 0; i < 5; i++)             //
        printf("%d ", array2[i]);       // End

    printf("\nMerged sorted of two arrays: ");  // To display the merged sorted of two arrays
    for (i = 0; i < 10; i++)                    //
        printf("%d ", merge[i]);                // End
    return 0;
}
