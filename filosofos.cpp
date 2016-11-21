#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
int fil=0, i,par=0,num=0,prim=0,tope=0,excep1=0,excep2=0,primpar=0;
clrscr();
gotoxy(25,3),printf("La Cena De Los Filosofos\n");
printf("Cuantos filosofos estan en la mesa?   ");
scanf("%d",&fil);
printf("\nQue filosofo comera primero   ");
scanf("%d",&prim);
par=fil%2;
tope=fil+(prim-1);
if(par==0)
	{
   if(prim%2==0)
   	{
      for(i=1;i<=fil;i++)
   		{
      	num=i%2;
      	if(num==0)
      		{
         	printf("\nFilosofo %d     Comiendo",i);
         	}
      	else
      		{
         	printf("\nFilosofo %d     Pensando",i);
         	}
      	}
   	}
   else
   	{
      for(i=1;i<=fil;i++)
   	{
      num=i%2;
      if(num==1)
      	{
         printf("\nFilosofo %d     Comiendo",i);
         }
      else
      	{
         printf("\nFilosofo %d     Pensando",i);
         }
      }
      }
   }
else
	{
   if(prim==1)
   	{
   	for(i=1;i<fil;i++)
   		{
      	num=i%2;
      	if(num==0)
      		{
         	printf("\nFilosofo %d     Pensando",i);
         	}
      	else
      		{
         	printf("\nFilosofo %d     Comiendo",i);
      		}
      	}
      printf("\nFilosofo %d     Pensando",fil);
      }
   else
   	{
      excep1=prim-1;
      excep2=prim-2;
      primpar=prim%2;
      if(primpar==1)
      	{
      	for(i=prim;i<=fil;i++)
   			{
      		num=i%2;
      		if(num==0)
         		printf("\nFilosofo %d     Pensando",i);
      		else
         		printf("\nFilosofo %d     Comiendo",i);
      		}
      	for(i=1;i<prim-2;i++)
      		{
            	num=i%2;
            	if(num==0)
         			printf("\nFilosofo %d     Comiendo",i);
      			else
         			printf("\nFilosofo %d     Pensando",i);
            }
         printf("\nFilosofo %d     Pensando",excep2);
      	printf("\nFilosofo %d     Pensando",excep1);
         }
			else
      	{
         for(i=prim;i<=fil;i++)
         	{
            num=i%2;
            if(num==1)
            	printf("\nFilosofo %d     Pensando",i);
            else
            	printf("\nFilosofo %d     Comiendo",i);
            }
            for(i=1;i<prim-2;i++)
            	{
               num=i%2;
               if(num==1)
               	printf("\nFilosofo %d     Comiendo",i);
               else
               	printf("\nFilosofo %d     Pensando",i);
               }
            printf("\nFilosofo %d     Pensando",excep2);
      		printf("\nFilosofo %d     Pensando",excep1);
            }
      }
   }

getch();
}