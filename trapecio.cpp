#include <iostream>
using namespace std;

int main() {
    float base_mayor, base_menor, altura;
    
    // Pedir al usuario que ingrese las longitudes de las bases y la altura
    cout << "Ingrese la longitud de la base mayor del trapecio: ";
    cin >> base_mayor;
    
    cout << "Ingrese la longitud de la base menor del trapecio: ";
    cin >> base_menor;
    
    cout << "Ingrese la altura del trapecio: ";
    cin >> altura;
    
    // Calcular el perímetro
    float perimetro = base_mayor + base_menor + 2 * altura;
    
    // Calcular el área
    float area = (base_mayor + base_menor) * altura / 2;
    
    // Mostrar el resultado
    cout << "El perimetro del trapecio es: " << perimetro << endl;
    cout << "El area del trapecio es: " << area << endl;
    
    return 0;
}
