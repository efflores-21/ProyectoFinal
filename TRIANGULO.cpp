// Programa que calcula el area y perimetro de un triangulo
// Por Elias Flores
#include <iostream>
using namespace std;
int main()
{
    char continuar; 
    do 
    {
     int base, alt, area, peri, lad1, lad2, lad3, area2;
     cout<<"\nPara el area del triangulo introdusca su base: \n";
     cin>>base;
     cout<<"\n Ahora la altura: \n";
     cin>>alt;
     cout<<"\nAhora para el perimetro introdusca el primer lado del triangulo: \n";
     cin>>lad1;
     cout<<"\nSegundo lado: \n";
     cin>>lad2;
     cout<<"\nTercer lado: \n";
     cin>>lad3;
     cout<<"\nResultados: \n";
     area = base * alt; 
     area2 = area / 2; 
     cout<<"\n El area del trianagulo es: "<<area2;
     peri = lad1 + lad2 + lad3;
     cout<<"\n El perimetro es: "<<peri;
     cout<<"\nQuiere poner otros Digitos?(s/n): \n";
     cin>> continuar;
    }
    while (continuar == 's' || continuar == 'S');
    if( continuar == 'n' || continuar == 'N' )
    {
        return 0;
    }
    return 0;
}