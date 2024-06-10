//Programa que calcula el area y perimetro de un poligono regular 
//Por Elias Flores
#include <iostream>
using namespace std; 
int main()
{
    char continuar;
    do
    {
    int numlados, ladoslon, peri, apote, area1, area2;
    cout<<"\nPrimero Inrodusca el numero de lados del poligono: \n";
    cin>>numlados;
    cout<<"\nDigite la longitud de los lados: \n";
    cin>>ladoslon;
    peri = numlados * ladoslon;
    cout<<"\n Digite el apotema del poligono: \n";
    cin>>apote;
    cout<<"\nResultados \n";
    area1 = peri * apote;
    area2 = area1 / 2;
    cout<<"\n El perimetro del poligono es: "<<peri;
    cout<<"\nEl area del poligono es: "<<area2;
    cout<<"\n Quiere poner otros digitos?: ";
    cin>> continuar;
    }
    while (continuar == 's' || continuar == 'S');
    if ( continuar == 'n' || continuar == 'N')
    {
        return 0;
    }
    return 0;
}