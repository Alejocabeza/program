/* Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, el 
vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las tres 
ventas que realiza en el mes y el total que recibirá en el mes tomando en cuenta su sueldo base y comisiones. */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float sueldo_base = 0, venta_1 = 0, venta_2 = 0, venta_3 = 0, comisiones = 0;
    cout << "Cuanto es tu sueldo base? "; cin >> sueldo_base;
    cout << "Cuanto es el valor de tu primera venta: "; cin >> venta_1;
    cout << "Cuanto es el valor de tu segunda venta: "; cin >> venta_2;
    cout << "Cuanto es el valor de tu tercera venta: "; cin >> venta_3;
    comisiones = ((venta_1*0.10) + venta_1) + ((venta_2*0.10) + venta_2) + ((venta_3*0.10) + venta_3);
    cout << "El total de las comisiones es de: " << comisiones << " bs \n";
    cout << "El total del mes es: " << sueldo_base + comisiones << " bs";
    return 0;
}
