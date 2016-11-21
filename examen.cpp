#include<stdio.h>
#include<conio.h>

main()
	{
   int tam=0, cont1=4, cont2=3, cont3=3, i=0, arre[10], ct=0;
   while(ct<10)
   	{
      clrscr();
   	printf("\nDame el tamaño del plato:   ");
   	scanf("\n%d",&tam);
   	if((tam==1) && (cont1!=0))//tamaño 1
   		{
      	arre[ct]=tam;
         cont1=cont1-1;
         ct=ct+1;
      	}
         else
         	if(tam==1)
            	{
               printf("\nError, ya no hay mas platos de tamaño 1");
               getch();
               }
      else
      if((tam==2) && (cont2!=0)) //tamaño 2
   		{
      	arre[ct]=tam;
         cont2=cont2-1;
         ct=ct+1;
      	}
         else
         	if(tam==2)
            	{
               printf("\nError, ya no hay mas platos de tamaño 2");
               getch();
               }
      else
      if((tam==3) && (cont3!=0)) //tamaño 3
   		{
      	arre[ct]=tam;
         cont3=cont3-1;
         ct=ct+1;
      	}
         else
         	if(tam==3)
            	{
               printf("\nError, ya no hay mas platos de tamaño 3");
               getch();
               }
   	}
   printf("\nLa pila quedo de esta manera");
   for(i=9;i>=0;i--)
   	{
      printf("\n%d",arre[i]);
      }
   getch();
	}
