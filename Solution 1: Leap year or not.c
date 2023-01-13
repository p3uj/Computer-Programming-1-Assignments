#include<stdio.h>
#include<conio.h>

main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);
    //Using ?: operator to replace if else
    (year % 4 == 0) ? printf("%d is a Leap Year!", year) : printf("%d is not a Leap Year!",year);
    getch();
    return 0;
}
