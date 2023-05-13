// Resuelva el problema que tienen en una gasolinera. Los surtidores de la misma registran lo que surten en galones, pero el precio de la gasolina está fijado en litros. Se requiere que calcule y muestre lo que hay que cobrarle a un cliente, considerando que: (a) cada galón tiene 3.785 litros; (b) el precio del litro es de 100 Bolívares.
#include <iostream>
using namespace std;
int main()
{
    float galones, total;
    const float litros = 3.785;
    const float precio = 100;
    cout << "Indicame cuantos galones registraste: "; cin >> galones;
    galones = galones * litros;
    total = galones / litros;
    cout << "La cantidad de litros fueron de: " << galones << " litros \n";
    cout << "El monto a pagar es de: " << (total*precio) << " bs";
    return 0;
}
