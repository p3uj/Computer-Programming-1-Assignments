#include<stdio.h>
int mainArray[10], second[5], i, j, sameVal = 0;
int main()
{
    printf("Enter the elements for set A:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &mainArray[i]);

    printf("Enter the elements for set B:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &second[i]);

    for (i = 0; i < 5; i++){                // To determine how many value in set B are the same in set A
        for (j = 0; j < 10; j++)            //
            if (second[i] == mainArray[j])  //
                sameVal++; // To accumulate all value that are the same
    }                                       // End
    if (sameVal >= 5)
        printf("Set B is a subset of set A");
    else
        printf("Set B is not a subset of set A");
    return 0;
}
