
#include <iostream>
#include "modulo1_captura.h"
#include "modulo2_calculos.h"
#include "modulo3_reporte.h"
using namespace std;

int main()
{
    system("title Simulador de Inversiones Financieras - UTN");
    // constante para no repetir la longitud en cada parte
    const int TAMANIO_ARRAYS = 3;

    double capital;
    double tasas[TAMANIO_ARRAYS][TAMANIO_ARRAYS];
    string bancos[TAMANIO_ARRAYS] = {"Banco Nacion", "Banco Provincia", "Banco Hipotecario"};
    double promedios[TAMANIO_ARRAYS] = { 0.0, 0.0, 0.0 };
    double rendimientos[TAMANIO_ARRAYS][TAMANIO_ARRAYS]; // array para guardar los rendimientos obtenidos de GenerarRendimientos
    int periodos[TAMANIO_ARRAYS] = { 1, 4, 12 }; // 1 (Anual), 4 (Trimestral), 12 (Mensual)

    // Captura de datos
    capital = IngresarCapital();
    IngresarTasasHistoricas(tasas, bancos);

    // Procesamiento de Cálculos
    CalcularPromedios(tasas, promedios, TAMANIO_ARRAYS);
    GenerarRendimientos(capital, promedios, rendimientos, periodos, TAMANIO_ARRAYS);

    // Obtener mejores opciones
    int mejorBancoIndice = 0;
    int mejorModIndice = 0;
    EncontrarMejorOpcion(rendimientos, mejorBancoIndice, mejorModIndice, TAMANIO_ARRAYS);

    // Imprimir reporte de rendimientos y recomendación de inversión
    MostrarReporte(bancos, promedios, rendimientos, mejorBancoIndice, mejorModIndice, capital);

    return 0;
}
