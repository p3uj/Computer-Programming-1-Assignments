// Using for control structure
#include<stdio.h>
int day = 1, rate = 20, losesMiles = 2, totalMiles = 200;
int miles;
int main()
{
    printf("DAY\t\tRATE\t\tMILES\n");
    if (day == 1){
        miles = 50 + rate - losesMiles;     // 50 is the initial miles.
        printf(" %d\t\t %d\t\t %d\n", day, rate, miles);
    }
    for (miles = miles; miles != totalMiles; miles+=0){
        day++;
        rate--;
        miles = miles + rate - losesMiles;
        printf(" %d\t\t %d\t\t %d\n", day, rate, miles);
    }
    if (day == 13)
        printf("Condolence Bareng :(\nBareng dies on day %d", day);
    else
        printf("\nCongratulations Bareng!\nBareng reaches civilization on day %d!", day);
    return 0;
}
