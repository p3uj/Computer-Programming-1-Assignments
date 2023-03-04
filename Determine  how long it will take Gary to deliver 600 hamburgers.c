#include<stdio.h>
#include<dos.h>
int burgers, min, hr;
main()
{   
	burgers = min = hr =0;
	gotoxy(20,2); printf("JEMIMAH'S HAMBURGER\n\n");
	printf("HOURS          MINUTES         BURGERS\n\n");
	for (burgers = 12; burgers <= 600; burgers += 12)
	{  
		min = min +2;
		if (min%60 != 0)
			printf("%17d%17d\n", min, burgers);
		else
		{
			hr++;
			min =0;
			printf("%7d%10d%17d\n", hr, min, burgers);
		}
		delay(300);
	}
	printf("\n\n Gary delivered 600 hamburgers in %d hour/s and %d minutes",hr, min);
	return 0;
}
