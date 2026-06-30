#include "modulo1_captura.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void EncontrarMejorOpcion(double rendimientos[3][3], int &mejorBancoIndice, int &mejorModIndice, int array_length) {
    // se inicializa con la primera posicion de la matriz
    double maxRendimiento = rendimientos[0][0];
    mejorBancoIndice = 0;
    mejorModIndice = 0;

    // se recorre la matriz y se almacena el estado de mejor rendimiento
    for (int banco = 0; banco < array_length; banco++) {
        for (int modalidad = 0; modalidad < array_length; modalidad++) {
            if (rendimientos[banco][modalidad] > maxRendimiento) {
                maxRendimiento = rendimientos[banco][modalidad];
                mejorBancoIndice = banco;
                mejorModIndice = modalidad;
            }
        }
    }
}

// imprime en pantalla un resumen del análisis realizado
void MostrarReporte(string bancos[3], double promedios[3], double rendimientos[3][3], int mejorBancoIndice, int mejorModIndice, double capitalInicial) {

    string nombresModalidades[3] = { "Anual Completa", "Trimestral con Reinversion", "Mensual con Reinversion" };
    system("cls");

cout << "\n=========================================================================================" << endl;
    cout << "                             REPORTE DE RENDIMIENTOS OBTENIDOS                           " << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    // Encabezados de la tabla
    cout << left << setw(25) << "BANCO"
         << right << setw(20) << "ANUAL COMPLETA"
         << setw(24) << "TRIMESTRAL c/REINV."
         << setw(20) << "MENSUAL c/REINV." << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    // Mostrar rendimientos en formato de filas y columnas
    for (int i = 0; i < 3; i++) {
        cout << left << setw(25) << bancos[i];
        for (int j = 0; j < 3; j++) {
            if (j == 0) cout << right << setw(8) << "$" << fixed << setprecision(2) << setw(12) << rendimientos[i][j];
            if (j == 1) cout << right << setw(12) << "$" << fixed << setprecision(2) << setw(12) << rendimientos[i][j];
            if (j == 2) cout << right << setw(8) << "$" << fixed << setprecision(2) << setw(12) << rendimientos[i][j];
        }
        cout << endl;
    }
    cout << "=========================================================================================" << endl;

    // Imprimir recomendación final de inversión
    cout << endl << endl << endl;
    cout << "\n==========================================================" << endl;
    cout << "                   RECOMENDACION FINAL                    " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "El banco recomendado es: " << bancos[mejorBancoIndice] << endl;
    cout << "La modalidad mas rentable es: " << nombresModalidades[mejorModIndice] << endl;
    cout << "El rendimiento neto estimado sera de: $" << fixed << setprecision(2) << rendimientos[mejorBancoIndice][mejorModIndice] << endl;
    cout << "Capital final estimado (Capital + Ganancia): $" << fixed << setprecision(2) << (capitalInicial + rendimientos[mejorBancoIndice][mejorModIndice]) << endl;
    cout << "==========================================================" << endl;
}
