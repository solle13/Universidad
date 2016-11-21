#include<stdio.h>     //librerias
#include<conio.h>
#include<stdlib.h>

struct lista //estructura de la lista
	{
   int x;  //elemento
   int pos;  //posicion
   struct lista *siguiente; //puntero
	};
struct lista *primero, *ultimo; //nodo ultimo y primero  pata no perder el orden de la lista

void insertar();
void imprimelista();
void localiza();
void suprime();                    //funciones de las operaciones basicas
void recupera();
void siguiente_y_anterior();
void anula();
void primero_lista();
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
         	recupera();
      		break;
         case 4:
         	suprime();
      		break;
         case 5:
         	siguiente_y_anterior();
      		break;
         case 6:
         	anula();
      		break;
         case 7:
         	primero_lista();
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
   struct lista *nuevo, *aux,*dir;    //pinteros nuevo: para el nuevo a insertar, aux:trabajo con el auxiliar para no mover nada del original, dir: para guardar la direccion de siguiente y asignarla al nuevo siguiente.
   int in_pos=0,i=0;
   clrscr();
   nuevo=(struct lista *) malloc (sizeof(struct lista)); //se crea el espacio en memoria
   printf("Que elemento deseas insertar: ");
   scanf("%d",&nuevo->x);   //se guarda en x de la lista
   nuevo->siguiente=NULL;  //se iguala a null el puntero siguiente
   cont=cont+1;       //contador de elementos d la lista aumenta a +1
   if(primero==NULL) //si la lista esta vacia
   	{
      primero=nuevo;  //el elemento nuevo es igual a primero
      ultimo=nuevo;    //pero tambien es igual al ultimo
   	}
      else    //sino
      	{
         printf("En que posicion quieres insertar: ");
         scanf("%d",&in_pos); //se pìde y se guarda en una variable
         if(in_pos<cont && in_pos>1 && cont>2)   //q la posicion dada se valida menor q el tamaño del contador y q sea mayor de 1 xq esa es otra operacion y q el numero de datos sea mayor de 2 como un caso especial
            	{
               aux=primero; //igualamos nuestro puntero auxiliar
               while(i!=1)  //i para terminar la captura
               	{
               	if(aux->pos==in_pos-1) //nos vamos al elemento anterior a la de la posicion solicitada
               		{
                     dir=aux->siguiente; //usamos dir para guardar la direccion del dato q se recorrera
                     aux->siguiente=nuevo;  //aora siguiente apunta al nuevo
                     nuevo->siguiente=dir;   //y el nuevo apunta a la direccion del q estaba antes en su lugar
                     i=1; //terminamos captura
                     }
                     else //si no
                     	aux=aux->siguiente;   //busca q in_pos sea igual a aux->pos
                  }
               }
         else
         	if(in_pos==cont)//si se desea insertar el nuevo elemento al ultimo de la lista
            	{
            	ultimo->siguiente=nuevo; //ultimo siguiente es igual a nuevo
         		ultimo=nuevo;             //y se actualiza ultimo elemento al nuevo
            	}
         else
            if(in_pos==1)//si se desea insertar al principio
            	{
               nuevo->siguiente=primero;  //puntero siguiente del nuevo elemento es igual a primer elemento
               primero=nuevo;   //se actualiza primero al nuevo elemento
               }

         }
   }

void localiza()
	{
   struct lista *aux;
   int loc=0,i=0,cont=0;//este "cont" es local y no altera el contador total de la lista
   aux=primero;
   clrscr();
   if(aux!=NULL) //si la lista no este vacia
   	{
   	printf("Que elemento deseas localizar: ");
   	scanf("%d",&loc); //se guarda el elemento a localizar
   	while(i!=1) //i para el termino de la jugada
      	{
         if(cont!=ultimo->pos) //recorre toda la lista
         	{
            	if(aux->x==loc) //compara el elemento con el elemento a buskar y si es igual
      				{
      				printf("\nEl elemento esta en la posicion: %d",aux->pos); //muestra resultado
      				i=1; //acaba la operacion
      				}
            	else   //si no
            		aux=aux->siguiente;  // cambia al siguiente elemento de la lista
                  cont=cont+1;  // aumenta el contador local
            }
            else //acaba de revisar toda la lista
            	{
               i=1; //termina operacion
               printf("\nEl elemento no se encuentra en la lista");
               }
      	}

      }
      else //si no
      	printf("\nLa lista esta vacia");
   }

void suprime()
	{
   struct lista *aux,*sup,*dir;
   int pos=0;
   aux=primero;
   int elem=0,i=0,band=0;
   clrscr();
   if(aux!=NULL) //si lista no esta vacia
   	{
   	printf("Dame posicion que deseas eliminar: ");
   	scanf("%d",&pos); //guarda posicion a eliminar
      if(pos<=cont) //si la posicion dada es valida
      	{
         if(pos==1) //si posicion es la 1
         {
         primero=primero->siguiente;   //acemos primero al siguiente elemento osea el 2
         sup=aux;      //puntero sup es igual a aux(1)
         aux=aux->siguiente; //nos movemos al siguiente elemento de la lista
         free(sup);  //liberamos memoria en sup
         cont=cont-1;  //y restamos 1 al contador de elementos d la lista
         }
         else
         if(pos==cont)  //si el elemento a borrar es el ultimo
         	{
            while(band!=1)   //ciclo para buscarlo
      			{
         		if(cont-1==aux->pos)   //nos colocamos en un elemento antes del cual se va a borrar
      				{
            		ultimo=aux;     //actualizamos ultimo
            		sup=aux->siguiente;  //guardamos elemento a borrar en sup
      				free(sup);   //borramos sup
            		ultimo->siguiente=NULL;  //y puntero del ultimo lo igualamos a NULL
      				cont=cont-1;  //restamos 1 elemento a la lista
            		band=1;  //termina operacion
            		}
            		else
            			aux=aux->siguiente; //cambia al siguiente elemento
         		}
            }
         else
         if(pos-1==aux->pos)   //si no es 1, osea 2 en adelante, nos vamos 1 antes de la posicion dada
         	{
            sup=aux->siguiente; //el elemento a suprimir es el siguiente
            dir=sup->siguiente;  //guardamos la direccion a la q apunta el elemento a suprimir
            aux->siguiente=dir;   //el puntero siguiente del actual lo igualamos a la direccion
            free(sup);  //liberamos memoria del elemento eliminado
            cont=cont-1;    //restamos 1 elemento a la lista(cont)
            }
            else
            	{
               aux=aux->siguiente;  //si no es cambia al siguiente elemento de la lista
               }

         }
         else //si no es valida
         	printf("\nLa posicion en la lista no existe!");


      }
   	else //si esta vacia
      	printf("La lista esta vacia");
   }

void imprimelista()
	{
   struct lista *aux;
   int i=0,j=1;
   clrscr();
   aux=primero;
   printf("Lista");
   while(aux!=NULL) //mientras aux tenga valor
   	{
      aux->pos=j; //se asigna 1 de posicion al primer elemento de la lista
      printf("\n%d   %d",aux->x,j);  //muestra valor y pos
      aux=aux->siguiente;   //cambia al siguiente elemento de la lista
      i=1;   //la lista tiene valores diferentes a NULL
      j=j+1; //aumenta variable para asignar pos
      }
   if(i==0) //si i=0 quiere decir q la lista no tiene elementos
   	printf("\nLa lista esta vacia");
   getch();
   }

void recupera()
	{
   struct lista *aux;
   int rec=0,i=0,cont=0;
   aux=primero;
   clrscr();
   if(aux!=NULL)  //si la lista no esta vacia
   	{
   	printf("Posicion: ");
   	scanf("%d",&rec);  //posicion a recuperar
   	while(i!=1) //mientras no se efectue la operacion
      	{
         if(cont!=ultimo->pos) //si cont es diferente a la ultima pos para saber si esta o no esta en la lista
         	{
            	if(aux->pos==rec)//si pos del elemento en la lista es igual a la que se quiere recuperar
      				{
      				printf("\nEl elemento es: %d",aux->x);//se muestra
      				i=1;    //se acaba la operacion
      				}
            	else
            		aux=aux->siguiente; //se pasa al siguiente elemento
                  cont=cont+1;//aumenta contador
            }
            else
            	{
               i=1;  //se acaba operacion
               printf("\nLa posicion no se encuentra en la lista!");//no esta
               }
      	}

      }
      else  //si no la lista esta vacia
      	printf("\nLa lista esta vacia");
   }

void siguiente_y_anterior()
	{
   struct lista *aux,*ant, *sig,*actual;
   int pos=0,listo=0,listo2=0;
   aux=primero;
   clrscr();
   printf("Que posicion eliges: ");
   scanf("%d",&pos); //se pide pos
   if(aux!=NULL)  // si la lista no esta vacia
   	{
      while(listo!=1) //ciclo de operacion
   		{
         if(pos>cont) //si la posicion no es valida
         			{
            		printf("La posicion no se encuentra en la lista!");
                  listo=1; //termina operacion
            		}
         else
      	if(pos==1) //si pos es la primera
         	{
            sig=aux->siguiente; //sig es igual al 2º elemento
            listo=1;//termina operacion
            printf("\nLa posicion siguiente es: %d",sig->x); //imprime 2º
            printf("\nLa posicion anterior es: NULL");//y por logica el anterior es NULL
            }
            else
            if(pos==cont)//si la pos es la ultima
            	{
               if(pos-1==aux->pos) //nos colocamos en la penultima pos
               	{
                  ant=aux; //ant es igual al antepenultimo
                  listo=1;  //terminamos operacion
                  printf("\nLa posicion siguiente es: NULL"); //por logica sig es igual a NULL
            		printf("\nLa posicion anterior es: %d",ant->x);  //imprime ant
                  }
                  else
                  	aux=aux->siguiente;//cambia de elemento al sig
               }
            else
               if(pos-1==aux->pos) //si no es el primero ni el ultimo lo busca y se posiciona uno antes del cual selecciono el usuario
               	{
                  ant=aux; //ant es igual al elemento en dond estamos
                  actual=ant->siguiente; // actual es igual al elemento q escojio el usuario
                  sig=actual->siguiente; //y sig es igual al siguiente del actual
                  listo=1;//termina operacion
               	printf("\nLa posicion siguiente es: %d",sig->x); //imprime
                  printf("\nLa posicion anterior es: %d",ant->x);
                  }
                  else
                  	aux=aux->siguiente;//pasa al siguiente elemento
      	}
      }
		else
      	printf("La lista esta vacia");  //lista vacia
   }

void primero_lista()
	{
   struct lista *aux;
   aux=primero;//igualamos aux a primero
   printf("\nEl primer elemento de la lista es: %d",aux->x); //imprimimos aux
   }

void anula()
	{
   struct lista *aux,*sig;
   aux=primero;//igualamos aux a primero
   cont=0;//borramos contador de elementos
   while(aux!=NULL) //mientras tenga valores la lista
   	{
      sig=aux->siguiente; //guardamos el siguiente elemento
      free(aux); //borramos el actual
      aux=sig;//y despues igualamos aux con sig
      }
   primero=NULL;//al termino primero siguiente es igual a NULL
   printf("\nLa lista esta vacia...");//imprime lista vacia
   }