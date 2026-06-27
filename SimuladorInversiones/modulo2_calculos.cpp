#include "modulo2_calculos.h"
#include <cmath>
#include <iostream>
using namespace std;


void CalcularPromedios(double tasas[3][3], double promedios[3], int array_length){
	// tasas[filas = bancos][columnas = año]

	for (int banco = 0; banco < array_length; banco++)
	{
		double suma = 0.0;
		for (int anio = 0; anio < array_length; anio++)
		{
			suma = suma + tasas[banco][anio];
		}
		promedios[banco] = suma / array_length;
	}
}

double CalcularGananciaNeta(double capital, double tasaPromedio, int periodosCapitalizacion){
	
	// convertir la tasa a formato decimal como 0.9
	double castedTasaPromedio = tasaPromedio / 100.0;

	// obtener la ganancia usando la formula Ganancia = capital * (1 + tasa anual / periodos capitalizacion) ^ periodos apitalizacion - capital
	double gananciaNeta = capital * pow(1.0 + (castedTasaPromedio / periodosCapitalizacion), periodosCapitalizacion) - capital;
	
	return gananciaNeta;
}

void GenerarRendimientos(double capital, double promedios[3], double rendimientos[3][3], int periodos[3], int array_length){
	// rendimientos[filas = bancos][columnas = modalidades]

	// recorre bancos
	for (int banco = 0; banco < array_length; banco++)
	{
		// recorre modalidades
		for (int modalidad = 0; modalidad < array_length; modalidad++) {
			double gananciaNeta = CalcularGananciaNeta(capital, promedios[banco], periodos[modalidad]);

			// guardar los rendimientos por banco x modalidad
			rendimientos[banco][modalidad] = gananciaNeta;
		}
	}
}