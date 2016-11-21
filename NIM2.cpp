#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int arre[10],tot=0,bandera1=0,bandera2=0,ganacomp=0,ganausr=0;
int pide_datos();
void distribuye_arreglo(int nf);
void imprime(int nf);
void juega_usr();
void juega_compu(int nf);


main()
	{
   int nf=0,raiz=0;
   nf=pide_datos();
   tot=nf*nf;
   distribuye_arreglo(nf);
   imprime(nf);
	getch();
	do
		{
		if(tot!=0)
			{
			juega_usr();
			getch();
			imprime(nf);
			getch();
			}
			else
				if(ganausr!=1)
					{
					bandera1=1;
					ganacomp=1;
					}
		if(tot!=0)
			{
			juega_compu(nf);
			getch();
			imprime(nf);
			getch();
			}
			else
				if(ganacomp!=1)
					{
					bandera1=1;
					ganausr=1;
					}


		}
	while(bandera1!=1);
	if(ganausr==1)
		{
		printf("Usted Gana!!!!");
		}
		else
			if(ganacomp==1)
				printf("Computadora Gana!!!!");
	getch();
	}

int pide_datos()
	{
	int band=0,x=0,ren=0;
	while(band!=1)
		{
		clrscr();
		printf("Dame el numero de fosforos: ");
		scanf("%d",&x);
		if(x>3 && x<101)
			{
			ren=sqrt(x);
			band=1;
			return ren;
			}
			else
				{
				printf("Error!, debe ser un numero entre 4 y 100....");
				getch();
				}
		}
	}

void distribuye_arreglo(nf)
	{
	int i=0;
	arre[0]=1;
   for(i=1;i<nf;i++)
   	{
      arre[i]=arre[i-1]+2;
      }
   }
void imprime(nf)
	{
   int i=0,j=0;
   printf("\n");
   for(i=0;i<nf;i++)
   	{
      printf("%d",i+1);
      for(j=0;j<arre[i];j++)
      	{
         printf("*");
         }
      printf("\n");
      }
   }
void juega_usr()
	{
   int band=0,band2=0,ren_usr=0,elem_usr=0;
   if(tot!=0)
   	{
   	while(band!=1)
			{
			printf("Haz tu tirada\n");
			printf("Renglon: ");
			scanf("%d",&ren_usr);
			if(arre[ren_usr-1]!=0)
				{
				if(arre[ren_usr-1]==1)
					{
					elem_usr=1;
					printf("Elementos: %d",elem_usr);
					arre[ren_usr-1]=0;
					tot=tot-1;
					band=1;
					}
					else
						while(band2!=1)
							{
							printf("Elementos: ");
							scanf("%d",&elem_usr);
							if(elem_usr > arre[ren_usr-1] || elem_usr==0)
								{
								printf("Error!!!, escriba un numero valido");
								}
								else
									{
									arre[ren_usr-1]=arre[ren_usr-1]-elem_usr;
									tot=tot-elem_usr;
									band2=1;
									band=1;
									}
							}//fin while
					}//fin if
			} //fin while

		}//fin tot
		else
				{
				bandera2=2;
				}
	}
void juega_compu(nf)
	{
	int band=0,band2=0,ren_compu=0,elem_compu=0;
	if(tot!=0)
		{
		printf("Computadora tira\n");
		while(band!=1)
			{
			ren_compu=1+rand()%((nf+1)-1);
			if(arre[ren_compu-1]!=0)
				{
				if(arre[ren_compu-1]==1)
					{
					elem_compu=1;
					printf("Renglon: %d",ren_compu);
					printf("\nElementos: %d",elem_compu);
					getch();
					arre[ren_compu-1]=0;
					tot=tot-1;
					band=1;
					}
					else
						{
						printf("Renglon: %d",ren_compu);
						while(band2!=1)
							{
							elem_compu=1+rand()%((arre[ren_compu-1]+1)-1);
							if(elem_compu < arre[ren_compu-1])
								{
								printf("\nElementos: %d",elem_compu);
								getch();
								arre[ren_compu-1]=arre[ren_compu-1]-elem_compu;
								tot=tot-elem_compu;
								band=1;
								band2=1;
								}
								else
									band2=0;

							}//fin while band2
						} //fin else

					} //fin if arre
					else
						{
						}
			} //fin while

		}//fin tot
		else
				{
				bandera1=1;
				}
	}

