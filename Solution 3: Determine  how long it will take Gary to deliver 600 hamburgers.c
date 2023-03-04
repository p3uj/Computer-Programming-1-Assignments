// Using do while control structure
#include<stdio.h>
int hamburgers = 12, minutes = 0, hour = 0;
int main()
{
    printf("\n\t   JEMIMAH'S HAMBURGER\n");
    printf("HOUR\t\tMINUTES\t\tNUMBER OF BURGERS\n");

    do
    {
        minutes+=2;
        if (minutes == 60){
            hour = 1;
            minutes = 0;
        }
        printf("%2d%18d%21d\n", hour, minutes, hamburgers);
        hamburgers+=12;
    } while (hamburgers <= 600);
    printf("Garry delivered the hamburgers in %d hour/s and %d minutes", hour, minutes);
    return 0;
}
