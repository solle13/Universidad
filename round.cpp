#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void imprimir();
void llegan();
void arregla();
int cont=1;
int tope=7;
int cuantum=0;
int arre[25],arreaux[25];
main()
	{
   int i=0,j=0,band=0,k=0;
   for(i=0;i<25;i++)
   	{
      arre[i]=0;
      arreaux[i]=0;
      }
   arre[0]=1+rand()%10;
   arre[1]=1+rand()%10;
   arre[2]=1+rand()%10;
   arre[3]=1+rand()%10;
   arre[4]=1+rand()%10;
   arre[5]=1+rand()%10;
   arre[6]=1+rand()%10;
   imprimir();
   while(getch()!=27)
   	{
      cuantum=0;
      printf("\n/////////////////////////////////////////////////////");
      llegan();
      cuantum=1+rand()%5;
      printf("\nCuantum: %d",cuantum);
      getch();
      for(i=0;i<25;i++)
      	{
         arre[i]=arre[i]-cuantum;
         if(arre[i]<=0)
         	{
            arre[i]=0;
            }
         }
      j=0;
      for(i=0;i<25;i++)
      	{
         if(arre[i]!=0)
         	{
            arreaux[j]=arre[i];
            j=j+1;
            }
         }
      for(i=0;i<25;i++)
      	{
         arre[i]=arreaux[i];
         }
      k=0;
      while(band!=1)
      	{
         if(arre[k]==0)
         	{
            tope=k-1;
            band=1;
            }
            else
            	k=k+1;
         }
      imprimir();
      cont=cont+1;
      printf("cont: %d",cont);
      for(i=0;i<25;i++)
   	{
      arreaux[i]=0;
      }
      }
   }

void imprimir()
	{
   int i=0;
   for(i=0;i<tope;i++)
   	{
      printf("\nProceso: %d Tiempo: %d",i+1,arre[i]);
      }
   }
void llegan()
	{
   int num=0,i=0,lleg=0;
   lleg=cont%3;
   if(lleg==0)
   	{
      num=1+rand()%7;
      printf("\nLlegan %d",num);
      printf("\ntope %d",tope);
      for(i=0;i<num;i++)
      	{
         arre[i+tope]=1+rand()%10;
         }
      tope=tope+num;
      }
   }
