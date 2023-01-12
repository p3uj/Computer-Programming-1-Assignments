#include<stdio.h>
#include<conio.h>
float hworked, hrate, othrs, otrate, wwage;
main()
{  
    hworked = hrate = othrs = otrate= wwage = 0.00;
    printf("Enter hours worked for the week: ");
    scanf("%f", &hworked);  // 45
    printf("Enter hourly rate: ");
    scanf("%f", &hrate);    // 100
    
    if (hworked <= 40)
        wwage = hworked * hrate;
    else
    {
        othrs = hworked-40;     // 45-40=5 hrs
        otrate = 1.5 * hrate;   // 1.5*100 = 150.00
        wwage = (40 * hrate) + (othrs * otrate);(40*100) + (5*150);
    }
    printf("Week's wage of the employee is %0.2f", wwage);  // 4750.00
    getch(); 
    return 0;
}
