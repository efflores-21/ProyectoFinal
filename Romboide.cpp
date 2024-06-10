#include <iostream>
using namespace std;

int main() {
    double base, altura, lado;
    
    //Solicitar las dimensiones del romboide
    cout << "Introduce la longitud de la base: ";
    cin >> base;
    cout << "Introduce la longitud de la altura: ";
    cin >> altura;
    cout << "Introduce la longitud del lado: ";
    cin >> lado;
    
    //Calcular el área
    double area = base * altura;
    
    //Calcular el perímetro
    double perimetro = 2 * (base + lado);
    
    //Mostrar los resultados
    cout << "El área del romboide es: " << area << endl;
    cout << "El perímetro del romboide es: " << perimetro << endl;
    
    return 0;
}
