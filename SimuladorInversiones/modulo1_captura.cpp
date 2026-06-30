#include "modulo1_captura.h"
#include <iostream>
#include <string>
using namespace std;

// Función para ingresar el capital con validación
double IngresarCapital() {
    double capital;
    bool valido = false;

    while(!valido) {
        cout << "\n=== INGRESO DE CAPITAL ===" << endl;
        cout << "Ingrese el capital a invertir ($): ";
        cin >> capital;

        // Valida si es un número válido
        if(cin.fail()) {
            cin.clear(); // Limpia el estado de error
            cin.ignore(10000, '\n'); // Ignora caracteres inválidos
            cout << "ERROR: Debe ingresar un numero valido.\n";
            continue;
        }

        // Valida que sea positivo
        if(capital <= 0) {
            cout << "ERROR: El capital debe ser mayor a 0.\n";
            continue;
        }

        valido = true;
    }


    return capital;
}

// Función para ingresar las tasas históricas con validación
//
void IngresarTasasHistoricas(double Tasas[3][3], string Bancos[3]) {
    string anios[3] = {"2023", "2024", "2025"};
    bool valido;

    for(int i = 0; i < 3; i++) {
        cout << "\n=== " << Bancos[i] << " ===" << endl;

        for(int j = 0; j < 3; j++) {
            valido = false;

            while(!valido) {
                cout << "Tasa anual " << anios[j] << " (%): ";
                cin >> Tasas[i][j];

                // Validar si es un número válido
                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "ERROR: Debe ingresar un número válido.\n";
                    continue;
                }

                // Validar que no sea negativo
                if(Tasas[i][j] < 0) {
                    cout << "ERROR: La tasa no puede ser negativa.\n";
                    continue;
                }

                valido = true;
            }
        }
    }
}
