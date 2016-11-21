#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void seleccion();
int i, j, k, p, buffer, limit = 9,matrix[10];
main()
	{
   printf("Seleccion\n");
   for(i=0;i<10;i++)
   	{
      matrix[i]=0;
      }
   for(i=0;i<10;i++)
   	{
      matrix[i]=1+rand()%51;
      }
   printf("\nDesordenados");
   for(i=0;i<10;i++)
   	{
      printf("\n%d",matrix[i]);
      }
   getch();
   seleccion();
   printf("\n\nOrdenados");
   for(i=0;i<10;i++)
   	{
      printf("\n%d",matrix[i]);
      }
   getch();
   }

void seleccion()
	{
	for(k = 0; k < limit; k++)
		{
		p = k;
		for(i = k+1; i <= limit; i++)
			{
         if(matrix[i] < matrix[p]) p = i;
         }
      if(p != k)
      	{
         buffer = matrix[p];
         matrix[p] = matrix[k];
         matrix[k] = buffer;
         }
		}
   }