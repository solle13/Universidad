#include<stdio.h>
#include<conio.h>

main()
	{
   float mi=0, km=0;
   clrscr();
   printf("dame el valo en millas: ");
   scanf("%f",&mi);
   km=mi*1.609344;
   printf("\nLa conversion es de: %f km",km);
   getch();
   }
