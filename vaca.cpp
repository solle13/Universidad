#include<stdio.h>
#include<conio.h>

void mayor_5();
void igual_5();
void menor_5();
void mayor_9();
int opc=0,f=0,radio=0,radio2=0,radio3=0,radio4=0;
float res=0,pi=3.1416,a1=0,a2=0,a3=0,a4=0;

int main()
	{
	while(f!=1)
		{
		//clrscr();
		printf("Programa Vaca\n");
		printf("Escoje una opcion: ");
		printf("\n1) 6 m\n2) 2m \n3) 10m \n4) n m \n5) Salir\n\n");
		scanf("\n%d",&opc);
		switch(opc)
			{
			case 1:
				radio=6;
				mayor_5();
				getch();
				break;
			case 2:
				radio=2;
				menor_5();
				getch();
				break;
			case 3:
				radio=10;
				mayor_9();
				getch();
				break;
			case 4:
				
				printf("\nDe cuantos metros sera la cuerda: ");
				scanf("%d",&radio);
				if((radio>5) && (radio<10))
					mayor_5();
					else
						if(radio>9)
							mayor_9();
							else
								if(radio==5)
									igual_5();
									else
									menor_5();
				getch();
				break;
			case 5:
				f=1;
				break;
			}
		}
	}
void mayor_5()
	{
	a1=((pi*(radio*radio))/4)*3;
	radio2=radio-5;
	a2=(pi*(radio2*radio2))/4;
	radio3=radio-4;
	a3=(pi*(radio3*radio3))/4;
	res=a1+a2+a3;
	printf("\nEl area es de: %f m2",res);
	}

void igual_5()
	{
	a1=((pi*(radio*radio))/4)*3;
	radio3=radio-4;
	a3=(pi*(radio3*radio3))/4;
	res=a1+a3;
	printf("\nEl area es de: %f m2",res);
	}

void menor_5()
	{
	a1=((pi*(radio*radio))/4)*3;
	res=a1;
	printf("\nEl area es de: %f m2",res);
	}
void mayor_9()
	{
	a1=((pi*(radio*radio))/4)*3;
	radio2=radio-5;
	a2=(pi*(radio2*radio2))/4;
	radio3=radio-4;
	a3=(pi*(radio3*radio3))/4;
	radio4=radio2-4;
	a4=(pi*(radio4*radio4))/4;
	res=(a1+a2+a3)-a4;
	printf("\nEl area es de: %f m2 aprox...",res);
	}
