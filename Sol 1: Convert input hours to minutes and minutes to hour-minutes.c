#include<stdio.h>
float hours;    // 4 bytes
int min;        // 2 bytes       
main()
{ 
    printf("Enter number of hours: ");
    scanf("%f", &hours);
    printf("%0.2f hour/s is %0.0f minute/s\n\n",hours,hours*60);    // Process1
    
    printf("Enter number of minutes: ");
    scanf("%d", &min);
    printf("\n%d minutes is %d hour/s and %d minute/s", min, min/60, min%60);   //Process2
    return 0;
}
