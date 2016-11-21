#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 10
char letra [max];

void ascii(char x);
void binario(int y);
void hexadecimal(int y);
void octal(int y);
char palabra[20];
int numA=0;
main()
	{
   char x;
   int y=0;
   clrscr();
   int tam=0,i=0;
   for(i=0;i<20;i++) //limpiar la cadena
   	{
      palabra[i]='\0';
      }
   printf("Introduce una palabra: ");
   for(i=0;i<20;i++)   //se introduce letra por letra hasta q se pulsa enter
        	{
			palabra[i]=getchar();
         if(palabra[i]=='\n')
         	{
            break;
            }
         }
   for(i=0;i<20;i++)
   	{
      if(palabra[i]=='\n')
   	tam=i;
      }
   printf("\nLa palabra es: %s\n",palabra);
   for(i=0;i<tam;i++)
   	{
      printf("\n---------------------------------------");
      x=palabra[i];
      ascii(x);
      y=numA;
      octal(y);
      binario(y);
      hexadecimal(y);

      }
   getch();
   }


void ascii(char x)
	{
	int i;

	for(i=0;i<=0;i++)
	{
		//printf("Ingresa el numero:");
		//scanf ("%s",&letra[i]);
      letra[i]=x;
		if (letra[i]>=0 && letra[i]<=255)
			{
				printf("\nel %c es igual a %d en ascii\n", letra[i],letra[i]);
            numA=letra[i];
				getch();
			}
		else
			{
				printf("numero no valido");
				getch();
			}
   }
}


void binario(int y)
	{
   int z,i,n,coc,n2=0;
	int nn2[50];
	nn2[0]=0;
   //printf("\nIngresa el numero: ");
   //scanf("%d",&n);
   n=y;
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
void octal(int y)
	{
   int num=0,res=0,suma=0,base=1;
   //printf("\nIntroduce un numero: ");
   //scanf("%d",&num);
   num=y;
   do{
		res=num%8;
		num=num/8;
		suma=suma+res*base;
		base=base*10;
		} while(num>0);
		printf("En octal es:\t%d\n", suma);
      getch();
   }
void hexadecimal(int y)
	{
   long int rem[50],i=0,length=0;
   long int num=0;
   //printf("\nIngrese un numero:  ");
   //scanf("%ld",&num);
   num=y;
	while(num>0)
   	{
      rem[i]=num%16;
      num=num/16;
      i++;
      length++;
   	}

	printf("\nEn hexadecimal es : ");
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

