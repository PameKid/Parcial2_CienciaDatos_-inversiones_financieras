#pragma once
#ifndef MODULO3_REPORTE_H_INCLUDED
#define MODULO3_REPORTE_H_INCLUDED

// recorre matriz para seleccionar el banco y modalidad con mejor rendimiento
void EncontrarMejorOpcion(double rendimientos[3][3], int &mejorBancoIndice, int &mejorModIndice, int array_length);

// imprime en pantalla un resumen del análisis realizado
void MostrarReporte(string bancos[3], double promedios[3], double rendimientos[3][3], int mejorBancoIndice, int mejorModIndice, double capitalInicial);


#endif // MODULO3_REPORTE_H_INCLUDED
