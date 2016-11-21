#include<stdio.h>
#include<conio.h>
#include<string.h>

struct
	{
   char clave[4];
   char nombre[50];
   int edad;
   char tel[20];
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
   int pos=0,i=0,j=0,band=0;
   char clave2[4],auxclave[4];
   clrscr();
   printf("En que posicion deseas insertar el registro: ");
   scanf("%d",&pos);
   if(pos<99 && pos>0)
   	{
      if(cont!=100)
      	{
      	if(pos>cont)   //si el valor se desea insertar en el ultimo lugar
      		{
            printf("\nClave: ");
            scanf("%s",&clave2);
            for(i=0;i<cont;i++)
            	{
               lista[i];
               if(auxclave[0]==clave2[0] && auxclave[1]==clave2[1]&& auxclave[2]==clave2[2] && auxclave[3]==clave2[3])
               	{
                  band=1;
                  }
                  else
                  	{
                     }
                }
            if(band==0)
            	{
               lista[cont+1];
               scanf("%s",lista->clave);
               printf("\nNombre: ");
               scanf("%s",lista->nombre);
               printf("\nEdad: ");
               scanf("%d",&lista->edad);
               printf("\nTelefono: ");
               scanf("%d",&lista->tel);
               cont=cont+1;//actualizar numero de registros asta el final
               }
               else
               	{
                  printf("\nLa clave ya existe!!!");
                  }
         	}
            else
            if(pos<=cont)   //si se desea insertar en primer o en medio
               	{
                  printf("\nClave: ");
            		scanf("%s",&clave2);
            		for(i=0;i<cont;i++)
            			{
                     lista[i];
                     if(auxclave[0]==clave2[0] && auxclave[1]==clave2[1] && auxclave[2]==clave2[2] && auxclave[3]==clave2[3])
               			{
                  		band=1;
                  		}
                  		else
                        {
                        }
                		}
                  if(band==0)
                  	{
                     for(i=cont-1;i<=pos-1;i--)
                     	{
                        lista[i+1]=lista[i];
                        }
                     lista[pos-1];
                     scanf("%s",lista->clave);
               		printf("\nNombre: ");
               		scanf("%s",lista->nombre);
               		printf("\nEdad: ");
               		scanf("%d",&lista->edad);
               		printf("\nTelefono: ");
               		scanf("%d",&lista->tel);
               		cont=cont+1;//actualizar numero de registros asta el final
                     }
                     else
                     	printf("\nLa clave ya existe!!!");
                  }
         }
         else
         	{
            printf("\nLa lista esta llena");
            }
      }
   	else
      	printf("\nLa posicion no existe!!!");
   getch();
   }
void buscar()
	{
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
      ("%d",lista[i]);
      }
   getch();
   }
