#include<stdio.h>
#include<conio.h>
int year;
main()
{  
    printf("Enter year: ");
    scanf("%d", &year);
    if (((year%4 ==0) && (year % 100 != 0 )) || (year%400 ==0))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    getch();
    return 0;
}
