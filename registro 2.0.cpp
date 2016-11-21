#include<stdio.h>
#include<conio.h>
#include<string.h>

struct list
	{
   int registro;
   int clave;
   char nombre[20];
   int edad;
   int tel;
   }lista[100];

int cont=0;//contador de registros en la lista
void insertar();
void buscar();
void borrar();
void visualizar();

main()
	{
   int opc=0;
   clrscr();
   while(opc!=5)
   	{
      clrscr();
      printf("Menu");
      printf("\n1)Insertar");
      printf("\n2)Buscar");
      printf("\n3)Borrar");
      printf("\n4)Visualizar");
      printf("\n5)Salir");
      printf("\nEscoje una opcion: ");
      scanf("%d",&opc);
      switch(opc)
      	{
         case 1:
         	insertar();
         	break;
         case 2:
         	buscar();
         	break;
         case 3:
         	borrar();
         	break;
         case 4:
         	visualizar();
         	break;
         case 5:
         	break;
         }
      }
   getch();
   }

void insertar()
	{
   int clave=0,band=0,pos=0,i=0;
   clrscr();
	printf("Dame clave: ");
   scanf("%d",&clave);
   for(i=0;i<cont;i++)
   	{
      if(lista[i].clave==clave)
      	{
         band=1;
         }
      }
   if(band==0)//entra un nuevo registro
   	{
      printf("\nEn que posicion quieres introducir el nuevo registro: ");
      scanf("%d",&pos);
      if(pos>cont && cont!=pos)
      	{
         pos=cont;
      	lista[pos].clave=clave;
         lista[pos].registro=pos;
      	printf("\nIntroduce el nombre a guardar: ");
      	scanf("%s",&lista[pos].nombre);
      	printf("\nIntroduce la edad: ");
      	scanf("%d",&lista[pos].edad);
      	printf("\nIntroduce el telefono: ");
      	scanf("%d",&lista[pos].tel);
         cont=cont+1;
         }
         else
         	if(pos<=cont)
            	{
               lista[pos].registro=pos;
               pos=pos-1;
               for(i=cont;i>pos;i--)
               	{
                  lista[i]=lista[i-1];  //akomoda los registros posteriores
                  }
               lista[pos].clave=clave;
               printf("\nIntroduce el nombre a guardar: ");
      			scanf("%s",&lista[pos].nombre);
      			printf("\nIntroduce la edad: ");
               scanf("%d",&lista[pos].edad);
      			printf("\nIntroduce el telefono: ");
      			scanf("%d",&lista[pos].tel);
         		cont=cont+1;
               }
      }
      else
      	printf("\nLa clave ya existe!!!");
   getch();
   }
void buscar()
	{
   int opc=0,busca=0,band=0,encontrado=0,i=0,temp=0,j=0;
   clrscr();
   printf("Que metodo de busqueda deseas ejecutar: \n1)Lineal \n2)Binaria");
   scanf("%d",&opc);
   switch(opc)
   	{
      case 1:
      	printf("\nQue clave deseas buscar: ");
         scanf("%d",&busca);
         for(i=0;i<cont;i++)
         	{
            if(lista[i].clave==busca)
            	{
               encontrado=i;
               band=1;
               }
            }
         if(band==1)
         	{
            printf("\nLa clave a buscar esta en la posicion %d",lista[encontrado+1].registro);
            printf("\nClave: %d",lista[encontrado].clave);
   			printf("\nNombre: %s",lista[encontrado].nombre);
   			printf("\nEdad: %d",lista[encontrado].edad);
   			printf("\nTelefono: %d",lista[encontrado].tel);
            }
      	break;
      case 2:
      	printf("\nQue clave deseas buscar: ");
         scanf("%d",&busca);
         for(i=0;i<cont;i++)    //ordeno d menor a mayor las claves
         	{
            for(j=0;j<cont;j++)
            	{
               if(lista[i].clave>lista[j].clave)
               	{
                  temp=lista[j].clave;
                  lista[j].clave=lista[i].clave;
                  lista[i].clave=temp;
                  }
               }
            }
         visualizar();
         cont2=cont;
         while(band!=1)
         	{
            mitad=cont2/2;
            if(busca==lista[mitad-1].clave)//si el q buska es el de enmedio
            	{
               encontrado=mitad-1;
               }
               else
            		if(busca>lista[mitad-1].clave)//si el q se buska es mayor al q sta en la mitad se va a la derecha
            		{
               	cont2=cont2-mitad;

               	}
            }
         for(i=0;i<cont;i++)   //regeso a komo staban antes de menor a mayor los registros
         	{
            for(j=0;j<cont;j++)
            	{
               if(lista[i].registro>lista[j].registro)
               	{
                  temp=lista[j].registro;
                  lista[j].registro=lista[i].registro;
                  lista[i].registro=temp;
                  }
               }
            }
      	break;
      }
   getch();
   }
void borrar()
	{
   }
void visualizar()
	{
   int i=0;
   clrscr();
   for(i=0;i<cont;i++)
   	{
      printf("\nRegistro: %d",lista[i].registro);
      printf("\nClave: %d",lista[i].clave);
   	printf("\nNombre: %s",lista[i].nombre);
   	printf("\nEdad: %d",lista[i].edad);
   	printf("\nTelefono: %d",lista[i].tel);
      }
   getch();
   }
