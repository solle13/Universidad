#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arre[6],arre2[6],sob=0,disp=0,tot=0,band=0,clien=0,tiemp=0,cont=0,cont1=0,corte=0,i=0,contclient=0;
void imprime();
void actualiza();
void llegan_clientes();
main()
	{
   clrscr();
   for(i=0;i<6;i++)
   	{
      arre[i]=0;
      arre2[i]=0;
      }
   printf("Barbero Dormilon\n");
   while(getch()!=27)
   	{
      llegan_clientes();

      imprime();
      printf("corte: %d\n",corte);
      actualiza();
      }
   }


void imprime()
	{
   if(arre[0]!=0)
      		{
         	printf("\nBarbero cortando......tiempo: %d",arre[0]);
         	}
         	else
            	if(arre[0]<1 && arre[1]!=0)
         			printf("\nBarbero Termino: tiempo : %d",arre[0]);
               else
               	printf("\nBarbero durmiendo");
      	for(i=1;i<6;i++)
      		{
         	if(arre[i]!=0)
         		printf("\nSilla %d ....... Ocupada: %d",i,arre[i]);
            	else
            		printf("\nSilla %d ....... Desocupada.",i);
         	}
            printf("\n");
   }

void actualiza()
	{
   if(arre[0]!=0)
   	{
      corte=1+rand()%5;
      if(corte>arre[0])
      	{
      	arre[0]=0;
      	contclient=contclient-1;
         }
         else
         	if(corte=arre[0])
            	{
               arre[0]=0;
               contclient=contclient-1;
               }
            else
            	if(corte<arre[0])
         			arre[0]=arre[0]-corte;
      }
      else
   	if(arre[0]==0 && arre[1]!=0)
      	{
         for(i=0;i<6;i++)
         	arre2[i]=0;
         for(i=0;i<5;i++)
            arre2[i]=arre[i+1];
         for(i=0;i<6;i++)
         	arre[i]=arre2[i];
         }
   cont=cont+1;
   }

void llegan_clientes()
	{
   cont1=cont%3;
   if(cont1==0)
   	{
      sob=0;
      clien=0+rand()%6;
      printf("\nLlegan clientes: %d",clien);
      sob=6-contclient;
      contclient=contclient+clien;
      if(clien>sob)
      	{
         if(arre[0]==0)
         	{
            printf("\n%d No alcanzaron lugar",clien-(sob-1));
            contclient=5;
            }
            else
            	{
               printf("\n%d No alcanzaron lugar",clien-sob);
         		contclient=6;
               }
         clien=sob;
         }
      i=0;
      if(arre[0]==0 && arre[1]==0)
         {
      	while(band<clien)
         	{
            arre[i]=1+rand()%5;
            band=band+1;
            i++;
            }
         }
            else
            	if(contclient>0 && arre[0]==0)
               	{
                  band=0;
                  i=1;
                  while(band!=clien)
                  	{
                     if(arre[i]==0)
                     	{
                        arre[i]=1+rand()%5;
                     	band=band+1;
                     	i++;
                        }
                        else
                        	i++;
                     }
                  }
                  else
                  	if(contclient>0)
                     	{
                  		band=0;
                        i=0;
                  		while(band!=clien)
                  			{
                           if(arre[i]==0)
                     			{
                              arre[i]=1+rand()%5;
                     			band=band+1;
                     			i++;
                              }
                              else
                              	i++;
                     		}
                  		}
      }
	}