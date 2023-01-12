#include<stdio.h>
#include<conio.h>
float hworked, hrate, wwage;
main()
{
    hworked=hrate=wwage = 0.00;
    printf("Enter hours worked for the week: ");
    scanf("%f", &hworked);  // 45
    printf("Enter hourly rate: ");
    scanf("%f", &hrate);    // 100
    if (hworked <= 40)
        wwage = hworked *hrate;   //  4000
    else
        wwage = (40 * hrate) + ((hworked -40) * (1.5 * hrate));     // (40*100) +((45-5))*(1.5*100)
        // wwage = (40*hrate) + ((hworked-40) * ((0.5*hrate)+hrate)) (You can also use this)
    printf("Week's wage of the employee is %0.2f", wwage);
    getch(); 
    return 0;
}
