#include<stdio.h>
int number, binary[32], i;
int main()
{
    printf("Enter an integer value: ");
    scanf("%d", &number);
    i = 0;
    do                          // Convertion of integer to its equivalent binary value
    {   binary[i] = number % 2; //
        number = number / 2;    //
        i++;                    //
    } while (number > 0);       // End
    printf("The equivalent binary value is: ");
    for (i = i-1; i >= 0; i--)
        printf("%d", binary[i]);
    return 0;
}
