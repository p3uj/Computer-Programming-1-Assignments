#include<stdio.h>
#include<conio.h>
int year, i;
main()
{  
    printf("\nEnter year: ");
    scanf("%d", &year);
    if (( year % 4 == 0) && (year %100 != 0))
    {
        if (year%400 != 0)
        {
            printf("%d is a leap year", year); 
            goto tapos;
        }
    }
    if (( year % 4 == 0) && (year % 100 == 0) && (year % 400 ==0))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
        
    tapos:
    getch();
    return 0;
}
