#include <iostream>
using namespace std;

int main() {
    // Definir variables
    float radio, area, perimetro;
    int opcion;

    // Solicitar al usuario que ingrese el radio del círculo
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Solicitar al usuario que elija entre calcular área o perímetro
    cout << "Seleccione una opción:" << endl;
    cout << "1. Calcular el área" << endl;
    cout << "2. Calcular el perímetro" << endl;
    cin >> opcion;

    // Calcular el área o el perímetro según la opción seleccionada por el usuario
    if (opcion == 1) {
        // Calcular el área del círculo
        area = 3.1416 * radio * radio;
        cout << "El área del círculo es: " << area << endl;
    } else if (opcion == 2) {
        // Calcular el perímetro del círculo
        perimetro = 2 * 3.1416 * radio;
        cout << "El perímetro del círculo es: " << perimetro << endl;
    } else {
        cout << "Opción no válida" << endl;
    }

    return 0;
}
