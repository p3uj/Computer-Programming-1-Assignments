// Using while and for control structure
#include<stdio.h>
int number, i;
int main()
{
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0){
        printf("Factors of %d = ", number);
        for (i = 1; i <= number; i++){
            if (number % i == 0)
                printf("%d ", i);
        }
        printf("\nEnter a number: ");
        scanf("%d", &number);
    }
    return 0;
}
