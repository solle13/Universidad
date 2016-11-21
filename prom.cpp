#include<stdio.h>
#include<conio.h>

main()
	{
   int num=0,i,cal=0;
   float prom=0,sum=0;
   clrscr();
   printf("Dame un numero: ");
   scanf("%d",&num);
   printf("Los numero son: ");
   for(i=0;i<num;i++)
   	{
      printf("\n%d",i);
      sum=sum+i;
      }
   prom=sum/num;
   printf("\nEl Promedio es de: %f",prom);
   getch();
   }
