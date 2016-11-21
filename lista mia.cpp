#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct lista
	{
   int x;  //elemento
   int pos;  //posicion
   struct lista *siguiente; //puntero
	};
struct lista *primero, *ultimo; //nodo ultimo y primero

void insertar();
void imprimelista();
void localiza();
void suprime();
int cont=0; //contador de posicion
main()
	{
   int opc=0;
   while(opc!=9)
   	{
      clrscr();
      printf("LISTA ENLAZADA\n");
   	printf("\n1)Insertar");
   	printf("\n2)Localiza");
   	printf("\n3)Recupera");
   	printf("\n4)Suprime");
      printf("\n5)Siguiente y anterior");
      printf("\n6)Anula");
      printf("\n7)Primero");
      printf("\n8)Imprime");
      printf("\n9)Salir\n");
      printf("\nElije una opcion: ");
   	scanf("%d",&opc);
   	switch(opc)
   		{
      	case 1:
      		insertar();
      		break;
      	case 2:
         	localiza();
      		break;
         case 3:
      		break;
         case 4:
         	suprime();
      		break;
         case 5:
      		break;
         case 6:
      		break;
         case 7:
      		break;
         case 8:
         	imprimelista();
      		break;
         case 9:
         	opc=9;
      		break;
      	}
      getch();
      }
	}


void insertar()
	{
   struct lista *nuevo;
   clrscr();
   nuevo=(struct lista *) malloc (sizeof(struct lista));
   printf("Que elemento deseas insertar: ");
   scanf("%d",&nuevo->x);
   nuevo->siguiente=NULL;
   cont=cont+1;
   nuevo->pos=cont;
   if(primero==NULL)
   	{
      primero=nuevo;
      ultimo=nuevo;
   	}
      else
      	{
         ultimo->siguiente=nuevo;
         ultimo=nuevo;
         }
   }

void localiza()
	{
   struct lista *aux;
   int loc=0,i=0,cont=0;
   aux=primero;
   clrscr();
   if(aux!=NULL)
   	{
   	printf("Que elemento deseas localizar: ");
   	scanf("%d",&loc);
   	while(i!=1)
      	{
         if(cont!=ultimo->pos)
         	{
            	if(aux->x==loc)
      				{
      				printf("\nEl elemento esta en la posicion: %d",aux->pos);
      				i=1;
      				}
            	else
            		aux=aux->siguiente;
                  cont=cont+1;
            }
            else
            	{
               i=1;
               printf("\nEl elemento no se encuentra en la lista");
               }
      	}

      }
      else
      	printf("\nLa lista esta vacia");
   }

void suprime()
	{
   struct lista *aux,*sup,*dir;
   int pos=0;
   aux=primero;
   int elem=0,i=0;
   clrscr();
   if(aux!=NULL)
   	{
   	printf("Dame posicion que deseas eliminar: ");
   	scanf("%d",&pos);
      if(pos<=cont)
      	{
         if(pos!=cont)
         	{
      		if(pos-1==aux->pos)
      			{
               sup=aux->siguiente;
         		dir=sup->siguiente;
         		aux->siguiente=dir;    //falta actualizar lista (posiciones!!!)
         		free(sup);
            	i=0;
            	while(aux->siguiente!=NULL)
            		{
               	cont=pos+i;
               	aux=aux->siguiente;
               	aux->pos=cont;
               	i=i+1;
               	}
               }
         		else
         			{
            		aux=aux->siguiente;
            		}
            }
            else
               	{
                  if(pos-1==aux->pos)
                  	{
                     sup=aux->siguiente;
                  	aux->siguiente=ultimo->siguiente;
                     aux=ultimo;
                  	free(sup);
                  	i=0;
                  	while(aux->siguiente!=NULL)
            				{
               			cont=pos+i;
               			aux=aux->siguiente;
               			aux->pos=cont;
               			i=i+1;
               			}
                     }
                     else
                     	aux=aux->siguiente;
                  }
         }
         else
         	printf("\nLa posicion en la lista no existe!");


      }
   	else
      	printf("La lista esta vacia");
   }

void imprimelista()
	{
   struct lista *aux;
   int i=0;
   clrscr();
   aux=primero;
   printf("Lista");
   while(aux!=NULL)
   	{
      printf("\n%d   %d",aux->x,aux->pos);
      aux=aux->siguiente;
      i=1;
      }
   if(i==0)
   	printf("\nLa lista esta vacia");
   getch();
   }