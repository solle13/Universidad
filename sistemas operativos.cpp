#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void roundrobin();
void trabajomascorto();
void prioridad();

int tiempo[15],prio[15];
int cuantum=0;

main()
{
int opc=0;
while(opc!=4)
{
clrscr();
printf("Menu\n1)Round Robin\n2)Trabajo Mas Corto\n3)Prioridad\n4)Salir\n");
scanf("%d",&opc);
switch(opc)
	{
   case 1:
	roundrobin();
   break;
   case 2:
   trabajomascorto();
   break;
   case 3:
   prioridad();
   break;
   case 4:             
   break;
	}
getch();
}
}

void roundrobin()
{
int i=0,cont=0;
clrscr();
for(i=0;i<15;i++)
	{
   tiempo[i]=1+rand()%(21-1);
   }
printf("\nproceso-----tiempo de ejecucion\n");
for(i=0;i<15;i++)
	{
	printf("%d---------------%d\n",i+1,tiempo[i]);
   }
   while(cont!=15)
   	{
      cuantum=1+rand()%(8-1);
      printf("\nCuantum: %d\n",cuantum);
      cont=0;
      for(i=0;i<15;i++)
      	{
      	tiempo[i]=tiempo[i]-cuantum;
         if(tiempo[i]>0)
         	{
            printf("\n%d----------------%d",i+1,tiempo[i]);
				getch();
            }
         else
         	{
            printf("\n%d----------------X",i+1);
            cont=cont+1;
            }
         }
      getch();
      }
}


void trabajomascorto()
{
int i=0;
clrscr();
for(i=0;i<15;i++)
	{
   tiempo[i]=1+rand()%(21-1);
   }
	printf("\nproceso-----tiempo de ejecucion\n");
for(i=0;i<15;i++)
	{
	printf("%d---------------%d\n",i+1,tiempo[i]);
   }
}

void prioridad()
{
int i=0,proc[15],j=0,k=0,h=0,prio1[15],prio2[15],prio3[15],tiempoj[15],tiempok[15],tiempoh[15],contp=0,proc1[15],proc2[15],proc3[15];
clrscr();
for(i=0;i<15;i++)
	{
   tiempo[i]=1+rand()%(21-1);
   prio[i]=1+rand()%(4-1);
   proc[i]=i+1;
   }
	printf("\nproceso-----tiempo de ejecucion-----prioridad\n");
for(i=0;i<15;i++)
	{
	printf("%d---------------%d----------------%d\n",proc[i],tiempo[i],prio[i]);
   }
   getch();
for(i=0;i<15;i++)
	{
   if(prio[i]==1)
      {
      proc1[j]=proc[i];
      tiempoj[j]=tiempo[i];
      prio1[j]=prio[i];
      j=j+1;
      }
   else
   	if(prio[i]==2)
      	{
         proc2[k]=proc[i];
         tiempok[k]=tiempo[i];
         prio2[k]=prio[i];
         k=k+1;
         }
      else
      	{
         proc3[h]=proc[i];
         tiempoh[h]=tiempo[i];
         prio3[h]=prio[i];
         h=h+1;
         }
   }
   printf("\n");
for(i=0;i<j;i++)
	{
   printf("%d---------------%d----------------%d\n",proc1[i],tiempoj[i],prio1[i]);
   }
for(i=0;i<k;i++)
	{
   printf("%d---------------%d----------------%d\n",proc2[i],tiempok[i],prio2[i]);
   }
for(i=0;i<h;i++)
	{
   printf("%d---------------%d----------------%d\n",proc3[i],tiempoh[i],prio3[i]);
   }
cuantum
}