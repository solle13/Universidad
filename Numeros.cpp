#include<stdio.h>
#include<conio.h>
#define max 10
int letra [max];

void ascii();
void binario();
void octal();
void hexadecimal();

main()
	{
   int opc=0;
   int num=0;
   while(opc!=7)
   	{
   	clrscr();
      printf("Elige una opcion: ");
      printf("\n1. Ascii");
      printf("\n2. Binario");
      printf("\n3. Octal ");
      printf("\n4. Hexadecimal ");
      printf("\n5. Decimal ");
      printf("\n6. Todos ");
      printf("\n7. Salir \n");
      scanf("%d",&opc);
      switch(opc)
      	{
         case 1:
         	ascii();
         	break;
         case 2:
         	binario();
         	break;
         case 3:
         	octal();
         	break;
         case 4:
         	hexadecimal();
         	break;
         case 5:
         	printf("Introduce el numero: ");
            scanf("%d",&num);
         	printf("\nEl numero en decimal es: %d",num);
         	break;
         case 6:
         	ascii();
            binario();
            octal();
            hexadecimal();
            printf("\nIntroduce el numero: ");
            scanf("%d",&num);
         	printf("\nEl numero en decimal es: %d",num);
         	break;
         case 7:
         	break;
         }
      getch();
      }
   getch();
   }


void binario()
	{
   int z,i,n,coc,n2=0;
	int nn2[50];
	nn2[0]=0;
   printf("\nIngresa el numero: ");
   scanf("%d",&n);
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
void octal()
	{
   int num=0,res=0,suma=0,base=1;
   printf("\nIntroduce un numero: ");
   scanf("%d",&num);
   do{
		res=num%8;
		num=num/8;
		suma=suma+res*base;
		base=base*10;
		} while(num>0);
		printf("En octal es:\t%d\n", suma);
      getch();
   }
void hexadecimal()
	{
   long int rem[50],i=0,length=0;
   long int num=0;
   printf("\nIngrese un numero:  ");
   scanf("%ld",&num);
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
   }


void ascii()
{
	int i;

	for(i=0;i<=0;i++)
	{
		printf("Ingresa el numero:");
		scanf ("%d",&letra[i]);
		if (letra[i]>=0 && letra[i]<=255)
			{
				printf("el %d es igual a %c en ascii\n", letra[i],letra[i]);
				getch();
			}
		else
			{
				printf("numero no valido");
				getch();
			}
   }
}



