#include<stdio.h>
int x, i;
main()
{ 
	printf("Enter a number: ");
	scanf("%d", &x);
	while(x > 0)
	{  
		i=1;
		printf("The factors of %d are ", x);
		while (i <= x)
		{    
			if (x%i ==0)
				printf("%3d", i);
			i++;
		}
		printf("\nEnter a number: ");
		scanf("%d", &x);
	}
	return 0;
}
