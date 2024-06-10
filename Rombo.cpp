#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double D, d, L;
    
    //Solicitar las diagonales y la longitud del lado del rombo
    cout << "Introduce la longitud de la diagonal mayor (D): ";
    cin >> D;
    cout << "Introduce la longitud de la diagonal menor (d): ";
    cin >> d;
    
    //Calcular la longitud del lado del rombo (con el teorema de Pitágoras)
    L = sqrt((D / 2) * (D / 2) + (d / 2) * (d / 2));
    
    //Calcular el área
    double area = (D * d) / 2;
    
    //Calcular el perímetro
    double perimetro = 4 * L;
    
    // Mostrar los resultados
    cout << "El área del rombo es: " << area << endl;
    cout << "El perímetro del rombo es: " << perimetro << endl;
    
    return 0;
}
