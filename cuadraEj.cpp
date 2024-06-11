#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    double lado, area, perimetro;
    
    // Solicitar al usuario que ingrese la longitud del lado del cuadrado
    cout << "Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;
    
    // Calcular el área (lado^2)
    area = lado * lado;
    
    // Calcular el perímetro (4 * lado)
    perimetro = 4 * lado;
    
    // Mostrar los resultados
    cout << "El área del cuadrado es: " << area << endl;
    cout << "El perímetro del cuadrado es: " << perimetro << endl;
    
    return 0;
}
