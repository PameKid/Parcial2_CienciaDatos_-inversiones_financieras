#pragma once
#ifndef MODULO2_CALCULOS_H_INCLUDED
#define MODULO2_CALCULOS_H_INCLUDED

//Función para calcular promedios de cada banco
void CalcularPromedios(double tasas[3][3], double promedios[3], int array_length);

// función para calcular la ganancia neta a partir del capital que el usuario ingrese
double CalcularGananciaNeta(double capital, double tasaPromedio, int periodosCapitalizacion);

// función para generar los rendimientos obtenidos de cada banco
void GenerarRendimientos(double capital, double promedios[3], double rendimientos[3][3], int periodos[3], int array_length);


#endif // !MODULO_CALCULOS_H_INCLUDED
