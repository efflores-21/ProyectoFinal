#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double longitud, ancho, area, perimetro;

    // Solicitar al usuario que ingrese la longitud y el ancho del rectángulo
    cout << "Ingrese la longitud del rectángulo: ";
    cin >> longitud;
    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho;

    // Calcular el área del rectángulo
    area = longitud * ancho;

    // Calcular el perímetro del rectángulo
    perimetro = 2 * (longitud + ancho);

    // Mostrar los resultados
    cout << "El área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetro << endl;

    return 0;
}
