#include<stdio.h>
float hworked, hr, week_wage;
main()
{
    //Input the number of hours worked
    printf("Enter number of hours worked: ");
    scanf("%f", &hworked);
    
    //Input the hourly rate
    printf("Enter hourly rate: ");
    scanf("%f", &hr);
    
    //Compute for the week's wage of the employee
    week_wage = hworked*hr;
    
    //Output week's wage
    printf("\nThe employee's week wage is %0.2f",week_wage);
    return 0;
}
