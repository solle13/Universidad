// Barbero_dormilon.cpp : Defines the entry point for the console application.
//
//#include<stdafx.h> //
#include <dos.h>
#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <stdio.h>
#define tam 6
//using namespace std;  //
void insertar();
void eliminar();
int cola[tam],i;
int main()
{
	int repetir, rec,X;
	repetir=0;
	for(i=0;i<tam;i++)
		cola[i]=0;
	i=0;
	do{
		system("Cls");
		if(cola[0]!=0)
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*             EL BARBERTO ESTA DESPIERTO TRABAJANDO          *"<<endl<<
					  "**************************************************************"<<endl;
			}
			else
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*                  EL BARBERTO ESTA DURMIENDO                *"<<endl<<
					  "**************************************************************"<<endl;
			}
	if(i>=tam)
	{
		cout<<"La fila esta llena no pueden entras mas clientes"<<endl;
	}
	else
	{
		insertar();
	}
	if(i<=0)
	{
		cout<<"La Fila Esta Vacia No Hay Clientes\n\n"<<endl;
		for(X=10;X>=0;X--)
			{
				printf("Tiempo Para Que Entren Mas Clientes:%d:\n",X);
				Sleep(500);
			}
	}
	else
	{
		eliminar();
	}
	printf("\n\n\n\n\n");
	cout<<"**************************************************************"<<endl<<
		  "*                  Si Deseas Salir Preciona 1                *"<<endl<<
		  "*             En Caso Contrario Precione Cualquier Numero    *"<<endl<<
		  "**************************************************************"<<endl;
	cin>>repetir;
	if(repetir==1)
		repetir=1;
	else 
		repetir=0;
	}while(repetir==0);	 
	return 0;
}
void insertar()
{
	int insertar,c,suma,rec;
	srand(time(NULL));
	insertar=0;
	insertar=0+rand()%(7-1);
	cout<<"Cuantos Datos Quieres Meter: "<<insertar<<endl;
	suma=i+insertar;
	c=0;
	if(suma>tam)
	{
		insertar=tam-i;
		cout<<"No Podras Meter Toda La Fila Que Deseas\n"<<endl;
		cout<<"El Numero Que Podras Meter Es: "<<insertar<<endl;
		while(c<insertar)
		{
			i++;
			cout<<"Dame Tu Dato A Meter En La Posicion -> "<<i<<endl;
			cola[i-1]=1+rand()%(11-1);
			cout<<cola[i-1]<<endl;
			c++;
		}
	}
	else
	{
		while(c<insertar)
		{
			i++;
			cout<<"Dame Tu Dato A Meter En La Posicion -> "<<i<<endl;
			cola[i-1]=1+rand()%(11-1);
			cout<<cola[i-1]<<endl;
			c++;
		}
	}
	system("Pause");	
	system("Cls");
	if(cola[0]!=0)
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*             EL BARBERTO ESTA DESPIERTO TRABAJANDO          *"<<endl<<
					  "**************************************************************"<<endl;
			}
			else
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*                  EL BARBERTO ESTA DURMIENDO                *"<<endl<<
					  "**************************************************************"<<endl;
			}			
}
void eliminar()
{
	int a,b,rec;
	b=0;
	while(b<2)
	{
		if(i>0)
		{
			for(a=cola[0];a>=0;a--)
			{
				printf("Al Clinte En Silla Le Quedan Segundos :%d:\n",a);
				Sleep(500);
			}
			for(a=0;a<=i-1;a++)
				cola[a]=cola[a+1];
				cola[a+1]=0;
			i--;
			b++;
			system("Pause");
			system("Cls");
			if(cola[0]!=0)
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*             EL BARBERTO ESTA DESPIERTO TRABAJANDO          *"<<endl<<
					  "**************************************************************"<<endl;
			}
			else
			{
				cout<<"**************************************************************"<<endl<<
					  "*                                                            *"<<endl<<
					  "*                 ALGORIDMO DE BARBERO DORMILON              *"<<endl<<
					  "*                 OCAMPO CABRERA SERGIO ANTONIO              *"<<endl<<
					  "*                                                            *"<<endl<<
					  "**************************************************************"<<endl<<
					  "* Tiempo Cliente En Silla         Tiempos Fila De Espera     *"<<endl<<
					  "*          "<<cola[0]<<"                             :-";
				for(rec=1;rec<tam;rec++)
				cout<<cola[rec]<<"-";
				cout<<":       *"<<endl<<
					  "**************************************************************"<<endl<<
					  "*                  EL BARBERTO ESTA DURMIENDO                *"<<endl<<
					  "**************************************************************"<<endl;
			}
		}
		else
		{
		printf("La Fila La Termino El Barbero\n\n");
			for(a=10;a>=0;a--)
			{
				printf("Tiempo Para Que Entren Mas Clientes:%d:\n",a);
				Sleep(500);
			}
		b=2;
		}
	}
}