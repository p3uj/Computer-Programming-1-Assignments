// Using while control structure
#include<stdio.h>
int number, i;
int main()
{
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0){
        i = 1;
        printf("Factors of %d = ", number);
        while (i <= number){
            if (number % i == 0)
                printf("%d ", i);
            i++;
        }
        printf("\nEnter a number: ");
        scanf("%d", &number);
    }
    return 0;
}
