
#include <iostream>
#include "modulo1_captura.h"
using namespace std;

int main()
{
    double capital;
    double tasas[3][3];
    string bancos[3] = {"Banco Nacion", "Banco Provincia", "Banco Hipotecario"};

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
