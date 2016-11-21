#include<stdio.h>
#include<conio.h>


main()
	{
   int x=0;
   clrscr();
   printf("Introduce la pass: ");
   x=getch();
   if((x-48)==1)
   	{
      printf("correcto");
      }
      else
      	{
         printf("Error");
         }
   printf("%d",x);
   getch();
   }
