#include<stdio.h>
#include<conio.h>

void hexadecimal(int x);
void octal(int x);
void binario(int x);
int arre1[10];
main()
	{
   int i=0,x=0;
   clrscr();
   printf("\nNumeros convertidos ");
   printf("\nLlenar arreglo...\n");
   for(i=0;i<10;i++)
   	{
      printf("Introduce un numero: ");
      scanf("%d",&arre1[i]);
      }
   printf("\nMostrar arreglo...");
   for(i=0;i<10;i++)
   	{
      printf("\n-------------------------------------------------");
      x=arre1[i];
      printf("\nArreglo %d, numero: %d ",i,arre1[i]);
      printf("\n");
      binario(x);
      printf("\n");
      hexadecimal(x);
      printf("\n");
      octal(x);
      printf("\n");
      x=0;
      }
   getch();
   }


void binario(int x)
	{
   int z,i,n,coc,n2=0;
	int nn2[50];
	nn2[0]=0;
   //printf("\nIngresa el numero: ");
   //scanf("%d",&n);
   n=x;
   for (i=0;i<50;i++)
		{
		nn2[i]=n%2;
		n=n/2;
		if(n==0)
		break;
		}
   printf("En binario es: " );
	for(z=i;z>=0;z--)
		{
		printf("%d",nn2[z]);
		}
   getch();
   }

void octal(int x)
	{
   int num=0,res=0,suma=0,base=1;
   //printf("\nIntroduce un numero: ");
   //scanf("%d",&num);
   num=x;
   do{
		res=num%8;
		num=num/8;
		suma=suma+res*base;
		base=base*10;
		} while(num>0);
		printf("En octal es:\t%d\n", suma);
      getch();
   }
void hexadecimal(int x)
	{
   long int rem[50],i=0,length=0;
   int num=0;
   //printf("\nIngrese un numero:  ");
   //scanf("%ld",&num);
   num=x;
	while(num>0)
   	{
      rem[i]=num%16;
      num=num/16;
      i++;
      length++;
   	}

	printf("En hexadecimal es : ");
	for(i=length-1;i>=0;i--)
  		{
    	switch(rem[i])
    		{
      	case 10:
          	printf("A");
          	break;
      	case 11:
          	printf("B");
          	break;
      	case 12:
          	printf("C");
          	break;
      	case 13:
          	printf("D");
          	break;
      	case 14:
          	printf("E");
          	break;
      	case 15:
          	printf("F");
          	break;
      	default :
         	printf("%ld",rem[i]);
    		}
  		}
   getch();
   }
