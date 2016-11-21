#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insercion();
int i, temp, j,matrix[10];
main()
	{
   printf("Insercion\n");
   for(i=0;i<10;i++)
   	{
      matrix[i]=0;
      }
   for(i=0;i<10;i++)
   	{
      matrix[i]=1+rand()%31;
      }
   printf("\nDesordenados");
   for(i=0;i<10;i++)
   	{
      printf("\n%d",matrix[i]);
      }
   getch();
   insercion();
   printf("\n\nOrdenados");
   for(i=0;i<10;i++)
   	{
      printf("\n%d",matrix[i]);
      }
   getch();
   }

void insercion()
	{
   for (i = 1; i < 10; i++)
		{
		temp = matrix[i];
		j = i - 1;
		while ( (matrix[j] > temp) && (j >= 0) )
			{
			matrix[j + 1] = matrix[j];
			j--;
			}
		matrix[j + 1] = temp;
		}
   }