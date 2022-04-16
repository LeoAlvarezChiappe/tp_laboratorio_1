/*
 ============================================================================
 Name        : TrabajoPractico1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "alvarez.h"



int main(void)
{
	setbuf(stdout,NULL);
	int kilometro;
	int submenu;
	char salir = 'n';
	int flagPedirkm=0;// si vale cero no pidio los kilometros
	float precioAerolineas=0;
	float precioLatam=0;
	int flagVuelo=0;
	int flagCalcularCostos=0;

	do
	{
		switch(menu())
		{
			case 1:
				kilometro=pedirKm();
				flagPedirkm=1;
				break;
			case 2:
				printf("\n1 Precio vuelo Aerolineas: \n");
				printf("\n2 Precio vuelo Latam: \n");
				scanf("%d", &submenu);
				if(submenu<=0 || submenu>2 )
				{
					printf("Opcion incorrecta, reingrese\n");
				}
				else{
					switch(submenu)
					{
					case 1 :
						while(flagPedirkm==0)
						{
							printf("\n**Primero debes ingresar los Kilometros en la opcion 1**\n");
							printf("1-Ingrese cantidad de Km: \n\n");
							scanf("%d", &kilometro);
							flagPedirkm=1;
							while(kilometro <= 0 )
							{
								printf("Error, reingrese cantidad de Km\n ");
								scanf("%d", &kilometro);
								flagPedirkm=1;
							}
						}
						flagVuelo=flagVuelo+1;
						precioAerolineas=precioVuelo();
						break;
				case 2:
					while(flagPedirkm==0)
					{
						printf("\n**Primero debes ingresar los Kilometros en la opcion 1**\n");
						printf("1-Ingrese cantidad de Km: \n\n");
						scanf("%d", &kilometro);
						flagPedirkm=1;
						while(kilometro <= 0 )
							{
								printf("Error, reingrese cantidad de Km\n ");
								scanf("%d", &kilometro);
								flagPedirkm=1;
							}
					}
						flagVuelo=flagVuelo+1;
						precioLatam=precioVuelo();
						break;
					}
					}
					break;
			case 3:
				if(flagPedirkm==0 || flagVuelo!=2 )
				{
					printf("Falta ingresar alguno de los datos! \n");
					system("PAUSE");
				}
				else
				{
					printf("Calculando Costos...\n");
					calcularCostos(precioAerolineas, kilometro);
					calcularCostos(precioLatam, kilometro);
					flagCalcularCostos=1;
					system("PAUSE");
				}
				break;
			case 4:
				if(flagPedirkm==0 || flagVuelo!=2 || flagCalcularCostos!=1 )
				{
					printf("Falta ingresar alguno de los datos y/o calular los costos! \n");
					system("PAUSE");
				}
				else
				{
					mostrarResultados (precioAerolineas, precioLatam, kilometro);
				}
				break;

			case 5:
				mostrarResultados (162965, 159339, 7090);
				break;

			case 6:
				confirmarSalida(&salir);
				break;


		}

			system("PAUSE");
	}
	while(salir!='s');

	return EXIT_SUCCESS;

}
