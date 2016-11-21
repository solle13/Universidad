#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int lista[100];
int tam=0,vacia=0,llena=0;
void genera_lista();
void menu();
void insertar();
void localizar();
void recuperar();
void suprimir();
void siguiente y anterior();
void anular();
void primero();
void imprimir();

main()
	 {
	 genera_lista();
	 menu();

	 }

void genera_lista()
	 {
	 int i;
	 for(i=0;i<=d;i++)
	 lista[i]=0;
	 for(i=0;i<=d;i+2)
	 lista[i]=rand(2);
	 }

void menu()
	 {
	 int bandera=0 , opcion=0, pos=0;
	 while(bandera!=1)
		  {
		  printf("Selecciona opcion");
		  printf("\n1)insertar\n2)localizar/n3)recuperar/n4)suprimir/n5)sigueinte y anterior/n6)anular/n7)primero/n8)imprimir/n9)salir");
		  scanf("%d",&opcion);
		  switch(opcion)
				{
				case "1":
					 insertar();
					 break();
				}
		  }
	 }


void insertar()
	{
	int insert=0,i=0;
	for(i=0;i<=tam;i++)
		{
		if(lista[i]!=NULL)
			{
			llena=llena+1;
			}
		else
		}
	if(llena=tam)
		{
		printf("La lista esta llena");
		}
	else

	printf("Que elemneto quieres insertar en la lista");
	scanf("%d",&insert);
	lista[0]=insert;
	for(i=0;i<=tam;i++)
		{
		lista[]
		}
	}
