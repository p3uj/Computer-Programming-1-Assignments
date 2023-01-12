#include<stdio.h>
float hworked, hr;
main()
{ 
    printf("Enter number of hours worked: ");
    scanf("%f", &hworked);
    printf("Enter hourly rate: ");
    scanf("%f", &hr);
    printf("\nThe employee's week wage is %0.2f",hworked*hr);
    return 0;
}
