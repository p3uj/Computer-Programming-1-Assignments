#include<stdio.h>
float hours;    // 4 bytes
int min, num_hrs, minutes, rem_minutes;     //4*2= 8 bytes
main()
{ 
    //Input1
    printf("Enter number of hours: ");
    scanf("%f", &hours);
    
    //Process1
    num_hrs = hours *60;
    //Output1
    printf("%0.2f hour/s is %d minute/s\n\n",hours,num_hrs);
    
    //Input2
    printf("Enter number of minutes: ");
    scanf("%d", &min);
    
    //Process2
    minutes = min/60;
    rem_minutes = min %60;
    
    //Output2
    printf("\n%d minutes is %d hour/s and %d minute/s", min, minutes, rem_minutes);
    return 0;
}
