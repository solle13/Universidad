#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void opcion1();
void opcion2();
void opcion3();
void opcion4();
void opcion5();

int arre[5];
int i=0,fil=0,band=0;

main()
	{
   clrscr();
   printf("La Cena De Los Filosofos");
   for(i=0;i<5;i++)
   	{
      arre[i]=0;
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   while(getch()!=27)
   	{
      band=0;
      clrscr();
      fil=1+rand()%5;
   	printf("\nQue filosofo come primero: %d",fil);
      getch();
      if(fil==1)
   		{
         opcion1();
      	}
      	else
      		if(fil==2)
         		{
               opcion2();
            	}
         		else
            		if(fil==3)
               		{
                     opcion3();
                  	}
                  	else
                  		if(fil==4)
                     		{
                           opcion4();
                        	}
                           else
                        		if(fil==5)
                           		{
                                 opcion5();
                              	}
       }
   }
void opcion1()
	{
   int rest=0;
   clrscr();
   arre[0]=1+rand()%5;
   arre[2]=1+rand()%5;
   for(i=0;i<5;i++)
   	{
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   getch();
   while(band!=1)
		{
      clrscr();
      rest=1+rand()%5;
		printf("Resta: %d",rest);
      getch();
      arre[0]=arre[0]-rest;
      if(arre[0]<0)
      	arre[0]=0;
      arre[2]=arre[2]-rest;
      if(arre[2]<0)
      	arre[2]=0;
      if(arre[0]==0 && arre[2]==0)
      	{
         band=1;
         }
         else
         	{
            }
      for(i=0;i<5;i++)
      	{
         printf("\n%d Filosofo %d",arre[i],i+1);
         }
      getch();
      }
   }
void opcion2()
	{
   int rest=0;
   clrscr();
   arre[1]=1+rand()%5;
   arre[3]=1+rand()%5;
   for(i=0;i<5;i++)
   	{
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   getch();
   while(band!=1)
		{
      clrscr();
      rest=1+rand()%5;
		printf("Resta: %d",rest);
      getch();
      arre[1]=arre[1]-rest;
      if(arre[1]<0)
      	arre[1]=0;
      arre[3]=arre[3]-rest;
      if(arre[3]<0)
      	arre[3]=0;
      if(arre[1]==0 && arre[3]==0)
      	{
         band=1;
         }
         else
         	{
            }
      for(i=0;i<5;i++)
      	{
         printf("\n%d Filosofo %d",arre[i],i+1);
         }
      getch();
      }
   }
void opcion3()
	{
   int rest=0;
   clrscr();
   arre[2]=1+rand()%5;
   arre[4]=1+rand()%5;
   for(i=0;i<5;i++)
   	{
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   getch();
   while(band!=1)
		{
      clrscr();
      rest=1+rand()%5;
		printf("Resta: %d",rest);
      getch();
      arre[2]=arre[2]-rest;
      if(arre[2]<0)
      	arre[2]=0;
      arre[4]=arre[4]-rest;
      if(arre[4]<0)
      	arre[4]=0;
      if(arre[2]==0 && arre[4]==0)
      	{
         band=1;
         }
         else
         	{
            }
      for(i=0;i<5;i++)
      	{
         printf("\n%d Filosofo %d",arre[i],i+1);
         }
      getch();
      }
   }
void opcion4()
	{
   int rest=0;
   clrscr();
   arre[3]=1+rand()%5;
   arre[0]=1+rand()%5;
   for(i=0;i<5;i++)
   	{
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   getch();
   while(band!=1)
		{
      clrscr();
      rest=1+rand()%5;
		printf("Resta: %d",rest);
      getch();
      arre[3]=arre[3]-rest;
      if(arre[3]<0)
      	arre[3]=0;
      arre[0]=arre[0]-rest;
      if(arre[0]<0)
      	arre[0]=0;
      if(arre[3]==0 && arre[0]==0)
      	{
         band=1;
         }
         else
         	{
            }
      for(i=0;i<5;i++)
      	{
         printf("\n%d Filosofo %d",arre[i],i+1);
         }
      getch();
      }
   }
void opcion5()
	{
   int rest=0;
   clrscr();
   arre[4]=1+rand()%5;
   arre[1]=1+rand()%5;
   for(i=0;i<5;i++)
   	{
      printf("\n%d Filosofo %d",arre[i],i+1);
      }
   getch();
   while(band!=1)
		{
      clrscr();
      rest=1+rand()%5;
		printf("Resta: %d",rest);
      getch();
      arre[4]=arre[4]-rest;
      if(arre[4]<0)
      	arre[4]=0;
      arre[1]=arre[1]-rest;
      if(arre[1]<0)
      	arre[1]=0;
      if(arre[4]==0 && arre[1]==0)
      	{
         band=1;
         }
         else
         	{
            }
      for(i=0;i<5;i++)
      	{
         printf("\n%d Filosofo %d",arre[i],i+1);
         }
      getch();
      }
   }

