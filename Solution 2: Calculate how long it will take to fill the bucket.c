// Using while control strucutre
#include<stdio.h>
int drops = 162, catDrinks, hour = 1;
int main()
{
    printf("HOUR\t\tDROPS\n");
    while (drops <= 2452){
        printf("%d\t\t%d\n", hour, drops);
        hour++;
        if (hour % 3 == 0){
            catDrinks = catDrinks + 28;
            drops = drops - 28;
        }
        drops+=162;
    }
    printf("\nThe cat drank %d drops of wine", catDrinks);
    return 0;
}
