/* Suponiendo que una paella se puede cocinar con arroz y camarones, y que para cada cuatro personas se utiliza medio kilo de arroz y un cuarto de kilo de camarones, escribir un algoritmo que pida por pantalla el número de personas que comerá paella y el precio por Kilo de los ingredientes, y como resultado muestre la cantidad de ingredientes necesarios para el número de personas que comerán, así como el costo total de la paella */ 
#include <iostream>
using namespace std;
int main()
{
    float personas = 0;
    cout << "Ingrese el numero de personas que comerán la paella: "; cin >> personas;
    double precio_arroz;
    cout << "Ingrese el precio por kilo del arroz: "; cin >> precio_arroz;
    double precio_camarones;
    cout << "Ingrese el precio por kilo de los camarones: "; cin >> precio_camarones;
    double cantidad_arroz = (personas / 4) * 0.5;
    double cantidad_camarones = (personas/4) * 0.25;
    double costo_arroz = precio_arroz * cantidad_arroz;
    double costo_camarones = precio_camarones * cantidad_camarones;
    double costo_total = costo_arroz + costo_camarones;
    cout << "Cantidad de arroz necesarios: " << cantidad_arroz << " kilos" << "\n";
    cout << "Cantidad de camarones necesarios: " << cantidad_camarones << " kilos" << "\n";
    cout << "Costo total de la paella: " << costo_total << " bs" << "\n";
    return 0;
}
