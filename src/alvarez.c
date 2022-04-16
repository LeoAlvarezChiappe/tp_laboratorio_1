/*
 * Alvarez.c
 *
 *  Created on: 15 abr. 2022
 *      Author: ASUS
 */
#include <stdio.h>
#include <stdlib.h>

int menu()
	{
	int opcion;

	 printf("  *** Menu de Opciones ***\n\n");
	    printf("1- Ingresar kilometros : \n");
	    printf("2- Ingresar precio de vuelos: \n");
	    printf("3- Calcular los costos \n");
	    printf("4- Informar resultados \n");
	    printf("5- Carga forzada de datos \n");
	    printf("6- Salir\n ");
	    scanf("%d", &opcion);

	    return opcion;
	}
	int pedirKm ()
	{
		int kmIngresados=0;

		printf("1-Ingrese cantidad de Km: \n\n");
		scanf("%d", &kmIngresados);
		while(kmIngresados < 0 )
		{
			printf("Error, reingrese cantidad de Km\n ");
			scanf("%d", &kmIngresados);
		}
		return kmIngresados;
	}
	float precioVuelo()
	{
		int dato;

		printf("Ingrese el precio del vuelo: \n");
		scanf("%d", &dato);
		while(dato < 0 )
			{
				printf("Error, reingrese el precio del vuelo:  \n ");
				scanf("%d", &dato);
			}
		return dato;
	}
	void confirmarSalida(char* p)
	{
	    char confirma;
	    printf("Confirma salida?: s=si/ n=no ");
	    fflush(stdin);
	    scanf("%c", &confirma);
	    *p = confirma;
	}
	float descuentoDelDiezPorciento(float precioUno)
	{
		float porcentajeDescuento;
		float resultado;

		porcentajeDescuento = (precioUno*10) /100;
		resultado = precioUno - porcentajeDescuento;

		return resultado;
	}
	float interesDelVeinticincoPorciento(float precioUno)
	{
		float porcentajeIncremento;
		float resultado;

		porcentajeIncremento = (precioUno*25) /100;
		resultado = precioUno + porcentajeIncremento;

		return resultado;
	}
	float precioBitcoin(float precioUno)
	{
		float resultado;

		resultado = precioUno/4606954.55;
	return resultado;
	}
	float precioUnitario(float precioUno, int kilometro)
	{
		float resultado;

		resultado = (float)precioUno/kilometro;
		return resultado;
	}
	float diferenciaDePrecioIngresada(float precioLatam, float precioAerolineas)
	{
		return precioLatam - precioAerolineas;
	}
	float calcularCostos (float precioUno, int kilometro)
	{
		descuentoDelDiezPorciento (precioUno);
		interesDelVeinticincoPorciento(precioUno);
		precioBitcoin(precioUno);
		precioBitcoin(precioUno);
		precioUnitario(precioUno, kilometro);

		return 0;
	}
	float mostrarResultados (float precioAerolineas, float precioLatam, int kilometro)
	{
		float precioConDebitoAerolineas;
		float precioConDebitoLatam;
		float precioConCreditoAerolineas;
		float precioConCreditoLatam;
		float precioBitcoinAerolineas;
		float precioBitcoinLatam;
		float precioUnitarioAerolineas;
		float precioUnitarioLatam;
		float diferenciaDePrecio;


		printf("Precio Aerolineas: $ %.2f\n", precioAerolineas);
		precioConDebitoAerolineas = descuentoDelDiezPorciento(precioAerolineas);
		printf("a) Precio con tarjeta de debito: $ %.2f\n", precioConDebitoAerolineas);

		precioConCreditoAerolineas = interesDelVeinticincoPorciento(precioAerolineas);
		printf("b) Precio con tarjeta de credito: $ %.2f\n", precioConCreditoAerolineas);

		precioBitcoinAerolineas = precioBitcoin(precioAerolineas);
		printf("c) Precio con bitcoin: %.7f BTC\n", precioBitcoinAerolineas);

		precioUnitarioAerolineas = precioUnitario(precioAerolineas, kilometro);
		printf("d) Precio unitario: $ %.2f\n\n", precioUnitarioAerolineas);

		printf("Precio Latam: $ %.2f\n", precioLatam);

		precioConDebitoLatam = descuentoDelDiezPorciento(precioLatam);
		printf("a) Precio con tarjeta de debito: $ %.2f\n", precioConDebitoLatam);

		precioConCreditoLatam = interesDelVeinticincoPorciento(precioLatam);
		printf("b) Precio con tarjeta de credito: $ %.2f\n", precioConCreditoLatam);

		precioBitcoinLatam = precioBitcoin(precioLatam);
		printf("c) Precio con bitcoin: %.7f BTC\n", precioBitcoinLatam);

		precioUnitarioLatam = precioUnitario(precioLatam,kilometro);
		printf("b) Precio unitario: $ %.2f\n\n", precioUnitarioLatam);

		diferenciaDePrecio = diferenciaDePrecioIngresada(precioLatam, precioAerolineas);
		printf("La diferencia de precio es : $ %.2f\n", diferenciaDePrecio);

		return 0;
		}
