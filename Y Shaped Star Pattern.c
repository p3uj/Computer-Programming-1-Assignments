#include<stdio.h>

int main()
{
    int rows, columns;

    for (rows = 1; rows <= 5; rows++){                  // It will loop as long as the value of rows is less than or equal to 5 (Outer loop)
        for (columns = 1; columns <= 5; columns++){     // It will loop as long as the value of columns is less than or equal to 5 (Inner loop)
            if ((rows==columns) && (rows<=3) || (rows+columns==6) && (rows<=3) || (columns==3) && (rows>2))     // Evaluate all condition. If the result is true after evaluating all condition, execute this part.
                printf("*");                            //                                                      // End
            else                                        //                                                      // If the result is false after evaluating all condition in the if statement, then execute this part.
                printf(" ");                            //                                                      // End
        }                                               // End (Inner loop)
    printf("\n");   // Execute this part if the value of rows is greater than 5
    }                                                   // End (Outer loop)
    return 0;
}
