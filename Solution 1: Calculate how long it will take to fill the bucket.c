// Using for control structure
#include<stdio.h>
int drops = 162, catDrinks, hour = 1;
int main()
{
    printf("HOUR\t\tDROPS\n");
    for (drops = 162; drops <= 2452; drops+=162){
        printf("%d\t\t%d\n", hour, drops);
        hour++;
        if (hour % 3 == 0){
            catDrinks = catDrinks + 28;
            drops = drops - 28;
        }
    }
    printf("\nThe cat drank %d drops of wine", catDrinks);
    return 0;
}
