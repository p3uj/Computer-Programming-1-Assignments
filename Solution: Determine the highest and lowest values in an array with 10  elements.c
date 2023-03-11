#include<stdio.h>
int value[10], i, lowestVal, highestVal;
int main()
{
    for (i = 0; i < 10; i++){
        printf("Enter an integer number: ");
        scanf("%d", &value[i]);
    }
    lowestVal = value[0];
    highestVal = value[0];
    for (i = 1; i < 10; i++){
        if (value[i] < lowestVal)
            lowestVal = value[i];
        if (value[i] > highestVal)
            highestVal = value[i];
    }
    printf("The lowest value is %d and the highest value is %d", lowestVal, highestVal);
    return 0;
}
