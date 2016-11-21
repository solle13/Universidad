#include<stdio.h>
#include<conio.h>


main()
	{
   int i=0;
   for(i=0;i<10;i++)                //
   	{                             //
      gotoxy(2,i+5);printf("*");    //
      getch();                      //      L
      }                             //
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(i+2,15);printf("*");   //
      getch();                      //
      }

   for(i=0;i<10;i++)                //
   	{                             //
      gotoxy(15,i+5);printf("*");    //
      getch();                      //
      }                             //
   for(i=0;i<10;i++)                //
   	{                             //       U
      gotoxy(i+15,15);printf("*");   //
      getch();                      //
      }                             //
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(25,15-i);printf("*");   //
      getch();                      //
      }

   for(i=0;i<10;i++)                //
   	{                             //
      gotoxy(28,15-i);printf("*");    //
      getch();                      //
      }                             //
   for(i=0;i<10;i++)                //
   	{                             //       N
      gotoxy(28+i,5+i);printf("*");   //
      getch();                      //
      }                             //
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(38,15-i);printf("*");   //
      getch();                      //
      }

   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(41,5+i);printf("*");   //    I
      getch();                      //
      }

   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(44+i,5);printf("*");    //
      getch();                      //      T
      }                             //
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(49,5+i);printf("*");   //
      getch();                      //
      }

   for(i=0;i<10;i++)                //
   	{                             //
      gotoxy(57,15-i);printf("*");    //
      getch();                      //
      }                             //
   for(i=0;i<10;i++)                //
   	{                             //       A  57 67
      gotoxy(57+i,5);printf("*");   //
      getch();                      //
      }                             //
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(67,5+i);printf("*");   //
      getch();                      //
      }
   for(i=0;i<11;i++)                //
   	{                             //
      gotoxy(57+i,10);printf("*");   //
      getch();                      //
      }

   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   getch();
   }
