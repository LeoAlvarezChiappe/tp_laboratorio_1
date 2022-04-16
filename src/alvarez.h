/*
 * alvarez.h
 *
 *  Created on: 15 abr. 2022
 *      Author: ASUS
 */

#ifndef ALVAREZ_H_
#define ALVAREZ_H_



	int menu(void);
	/** \brief pide ingresar un numero para un menu
	 *
	 * \return int retorna la opcion elegida
	 *
	 */
	int pedirKm (void);
	/** \brief pide los kilometros a recorrer
	 *
	 * \return int retorna los kilometros ingresados
	 *
	 */
	float precioVuelo(void);
	/** \brief pide ingresar el precio de un vuelo
	 *
	 * \return float retorna el precio indicado
	 *
	 */
	void confirmarSalida(char* p);
	/** \brief confirma la salida de un bucle do while
	 *
	 * \return void
	 *
	 */
	float descuentoDelDiezPorciento(float precioUno);
	/** \brief calcula un descuento del diez porciento sobre un flotante
	 *
	 *\ float precio uno es al valor al que se le descuenta el diez porciento
	 * \return float retorna el resultado
	 *
	 */
	float interesDelVeinticincoPorciento(float precioUno);
	/** \brief calcula un incremento del veinticinco porciento sobre un flotante
	 *
	 *\float precio uno es al valor al que se le aumenta el veinticinco porciento
	 * \return float retorna el resultado
	 *
	 */
	float precioBitcoin(float precioUno);
	/** \brief calcula un precio en bitcoin
	 *
	 *float precio uno es el valor que pasa a bitcoin
	 * \return float retorna el resultado
	 *
	 */
	float precioUnitario(float precioUno, int kilometro);
	/** \brief calcula el precio unitario de un vuelo por kilometro
	 *
	 *float precioUno es el precio por el que se calcula
	 *int kilometro es la distancia por la cual se divide el precio
	 * \return float retorna el resultado
	 *
	 */
	float diferenciaDePrecioIngresada(float precioLatam, float precioAerolineas);
	/** \brief calcula la diferencia entre precioLatam y precioAerolineas
	 *
	 *float precioLatam es el primer elemento de la resta
	 *float precioAerolineas es el segundo elemento de la resta
	 *
	 * \return float retorna el resultado
	 *
	 */
	float calcularCostos (float precioUno, int kilometro);
	/** \brief calcula todos los costos de las funciones usadas anteriormente
	 *
	 * float precio uno es el precio indicado
	 *
	 * int kilometro es la distancia ingresada
	 *
	 * \return float retorna el resultado
	 *
	 */
	float mostrarResultados (float precioAerolineas, float precioLatam, int kilometro);
	/** \brief muestra los resultados de calcualar costos
	 *
	 * float precioAerolineas el precio de uno de los vuelos
	 *float precioLatam  el precio del otro de los vuelos
	 *int kilometros ees la distancia ingresada
	 *
	 * \return float retorna el resultado
	 *
	 */



#endif /* ALVAREZ_H_ */
