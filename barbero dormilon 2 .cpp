#include<stdio.h>   //librerias: stdio es para las funciones d entrada y salida(printf,scanf), conio sirve para las funciones de getch y clrscr(limpiar pantalla)
#include<conio.h>
#include<stdlib.h>   //stdlib es para poder utilizar la funcion rand() q genera numeros aleatorios

int arre[6],arre2[6],sob=0,disp=0,tot=0,band=0,clien=0,tiemp=0,cont=0,cont1=0,corte=0,i=0,contclient=0;  //variables globales se pueden usar en el main y en otras funciones para no tener q ser deklaradas en kada funcion
void imprime(); //funciones, sirven para simplifikar el programa y tenerlo en orden
void actualiza();
void llegan_clientes();
main()
	{
   clrscr();
   for(i=0;i<6;i++)//se inicializan los arreglos para que no tengan numeros invalidos
   	{
      arre[i]=0;
      arre2[i]=0;
      }
   printf("Barbero Dormilon\n");
   while(getch()!=27) //mientras q al pulsar kualkier teca no se 27 en kodigo ascii el 27 representa la tecla esc, getch sirve komo pausa asta q se oprime kualkier tecla
   	{
      llegan_clientes(); //se ejecuta la funcion llegan clientes

      imprime();  //se imprimen los resultados
      printf("corte: %d\n",corte); //se muestra el corte q se hace(tiempo quantum)
      actualiza(); //se ejecuta la funcion actualiza
      }
   }


void imprime()   //funcion imprime
	{
   if(arre[0]!=0) //si el areglo es diferente a 0 osea la silla donde se korta no esta vacia
      		{
         	printf("\nBarbero cortando......tiempo: %d",arre[0]);  //imprime esto
         	}
         	else  //si no
            	if(arre[0]<1 && arre[1]!=0) //muesta el mensaje q el barbero termino si la primer silla arre[0] es menor q 1 y la segunda silla es diferente a 0 arre[1] osea q tiene a alguien esperando
         			printf("\nBarbero Termino: tiempo : %d",arre[0]);
               else
               	printf("\nBarbero durmiendo");  //si no hay nadie en la primera ni en la segunda e barbero se duerme
      	for(i=1;i<6;i++) //este for sirve para imprimir las demas sillas dependiendo si tienen algo dentro de las kasillas del arreglo imprime okupado y su numero d tiempo y si no desokupado
      		{
         	if(arre[i]!=0)
         		printf("\nSilla %d ....... Ocupada: %d",i,arre[i]);
            	else
            		printf("\nSilla %d ....... Desocupada.",i);
         	}
            printf("\n");
   }

void actualiza() //funcion actualiza
	{
   if(arre[0]!=0) //si la silla para cortar tiene un valor
   	{
      corte=1+rand()%5; //se genera el corte en random
      if(corte>arre[0])  //si el corte es mayor al valor del arreglo 0 signifika q termina kon el kliente
      	{
      	arre[0]=0;  //termina kon el kliente
      	contclient=contclient-1; //resta un cliente menos al contador de clientes
         }
         else  //si no
         	if(corte=arre[0])  //si corte es igual al valor del arre 0
            	{
               arre[0]=0;   //igual akaba kon el kliente
               contclient=contclient-1;  //y le resta un cliente menos
               }
            else  si no
            	if(corte<arre[0])  //si el corte es menor al valor
         			arre[0]=arre[0]-corte; //le resta el valor y tendra q kontinuar kon el kliente en la siguiente vuelta del programa
      }
      else
   	if(arre[0]==0 && arre[1]!=0) //si la silla para kortar arre 0 es igual a 0 y la silla de espera 1 (arre 1) tiene un cliente
      	{
         for(i=0;i<6;i++)//mueve los datos y kon esto se usa otro arreglo komo temporal arre2
         	arre2[i]=0;   //en el primer for el arre2 se inicializa kon 0 para q no tenga nada d vueltas anteriores
         for(i=0;i<5;i++) //el segundo for es para kopiar las sillas de espera al arreglo2 q en este kaso solo seran d la 1 a la 5 la silla para kortar no se kuenta
            arre2[i]=arre[i+1];
         for(i=0;i<6;i++) //el tercer es para regresar ya los valores actualizados pero aora el valor de la silla d espera 1 se ontroduce desd la posicion 0 de arre q okupamos osea se rekorren a la izkierda
         	arre[i]=arre2[i];//por eso el segundo for solo es asta >5 y no >6 km los otros 2 no kuenta la silla para kortar
         }
   cont=cont+1; //este kontador no se q demonios ace aki jajajajaja kisa ese fue el error q tuve pero na ntp yo lo pago jajaja
   }             //ya vi para q es es para llevar la kuenta de vueltas del programa osea q kada q le das una tecla kuenta

void llegan_clientes()  //funcion de que llegan klientes
	{
   cont1=cont%3; //se supone q llegan klientes kada 3 turnos osea kada 3 vueltas del programa y para acerlo se necesita el cont y kada q sea un multiplo de 3 llegaran clientes entonces para saber si son multiplos...
   if(cont1==0)   //se usa el % q es para saber el residuo de una division por ejemplo ay dice cont%3 kiere decir q el valor de cont se divide entre 3 pero el resultado sea si hay residuo o no si es multiplo de 3 el residuo es 0 si no es multiplo saldran 1 o 2 kreo :D
   	{           //si el residuo(cont1) es igual a 0 kiere decir q si es multiplo de 3 (vuelta 3,6,9,12,15,etc)
      sob=0;    //variabe sob se limpia xq en kada vuelta es distinto
      clien=0+rand()%6; //se generan los clientes q llegan en modo random de valores de 0 a 6
      printf("\nLlegan clientes: %d",clien);//
      sob=6-contclient;  //sob sirve para saber kuantas sillas estan disponibles
      contclient=contclient+clien;  //se le suman los clientes q llegaron a el kontador de clientes
      if(clien>sob)  //si clien es mayor q las sillas disponibles
      	{
         if(arre[0]==0)  //si el arreglo es igual a 0 osea q akabo
         	{
            printf("\n%d No alcanzaron lugar",clien-(sob-1));  //abre a los q sobraron y introduce los clientes en las sillas desokupadas y no en arre0
            contclient=5;   //y el contclient es automatiko 5 lo maximo sin kontar a q ya akabo:D
            }
            else   //si tiene un cliente kortando
            	{
               printf("\n%d No alcanzaron lugar",clien-sob); //ps lo mete igual sin ningun pedo
         		contclient=6;   //y aora si el konklient es el valor maximo 6 kontando al wey q esta en la silla de korte :)
               }
         clien=sob; //este tampoko se q pedo :)
         }
      i=0; //lo uso km un simple i de un for
      if(arre[0]==0 && arre[1]==0) //si no hay nadie
         {
      	while(band<clien) //mientras la var band sea menor q clien osea q no genere mas valores d los q son
         	{
            arre[i]=1+rand()%5;//los genero sus valores de quantum
            band=band+1;//aumenot band
            i++;  //aumento i
            }
         }
            else //si si tiene weyes
            	if(contclient>0 && arre[0]==0) //pero termino kon el de la silla de korte
               	{
                  band=0;
                  i=1;
                  while(band!=clien) //igua q el while anterior  asta el valor de clien
                  	{
                     if(arre[i]==0) //si el arreglo 1 xq i lo empiezo en 1 no en 0 xq cero akaba d ser desokupada osea la silla d korte y no se puede meter ahi directo
                     	{
                        arre[i]=1+rand()%5; //si es 0 le da valor
                     	band=band+1;
                     	i++;
                        }
                        else //si si tiene wey aumenta el i para evalua la siguiente posicion
                        	i++;
                     } //akaba asta q band es igual al numero de clientes q deben d ser ya kon los klientes q llegaron
                  }
                  else //si no
                  	if(contclient>0)//osea q si hay weyes esperando y ay wey en la silla de korte los mete normal no ay pex
                     	{
                  		band=0;
                        i=0;
                  		while(band!=clien)
                  			{
                           if(arre[i]==0)  //evalua kada espacio del arreglo y al q no tenga nada le da valor random
                     			{
                              arre[i]=1+rand()%5;
                     			band=band+1;
                     			i++;
                              }
                              else
                              	i++;  //si no evalua al siguiente
                     		} //akaba asta el valor d klientes q debe d aber :)
                  		}
      }
	}                    //karnal ya sabes kualkier pex tu dime ya sabes neta a ti t konsidero un gran amigo nunka t traicionare echele ganas bro saka el pomo :D