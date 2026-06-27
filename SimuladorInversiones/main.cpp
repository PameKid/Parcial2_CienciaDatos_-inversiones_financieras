
#include <iostream>
#include "modulo1_captura.h"
#include "modulo2_calculos.h"
using namespace std;

int main()
{
    // constante para no repetir la longitud en cada parte
    const int TAMANIO_ARRAYS = 3; 

    double capital;
    double tasas[TAMANIO_ARRAYS][TAMANIO_ARRAYS];
    string bancos[TAMANIO_ARRAYS] = {"Banco Nacion", "Banco Provincia", "Banco Hipotecario"};
    double promedios[TAMANIO_ARRAYS] = { 0.0, 0.0, 0.0 };
    double rendimientos[TAMANIO_ARRAYS][TAMANIO_ARRAYS]; // array para guardar los rendimientos obtenidos de GenerarRendimientos
    int periodos[TAMANIO_ARRAYS] = { 1, 4, 12 }; // 1 (Anual), 4 (Trimestral), 12 (Mensual)

    // Ingresar capital
    capital = IngresarCapital();

    // Ingresar tasas
    IngresarTasasHistoricas(tasas, bancos);

    // Mostrar lo ingresado (verificación)
    cout << "\n=== DATOS INGRESADOS ===" << endl;
    cout << "Capital: $" << capital << endl;

    cout << "\nTasas por banco:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "\n" << bancos[i] << ":" << endl;
        cout << "  2023: " << tasas[i][0] << "%" << endl;
        cout << "  2024: " << tasas[i][1] << "%" << endl;
        cout << "  2025: " << tasas[i][2] << "%" << endl;
    }

    return 0;
}
