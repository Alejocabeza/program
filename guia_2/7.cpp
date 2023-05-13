/* En la juguetería “Los Incansables”, se desea desarrollar un algoritmo/programa 
que permita efectuar el cálculo del descuento de un juguete, si el cliente compra 
más de 30 unidades, le descuenta el 13%, en otro caso solo le descuenta el 2%. 
Presentar en Pantalla el monto a pagar sin descuento, el monto del descuento y 
el monto total a pagar */
#include <iostream>
using namespace std;
int main()
{
    double unidades;
    cout << "Cuantas unidades lleva el cliente "; cin >> unidades; 
    double monto;
    cout << "Cuanto tiene que pagar el cliente por su compra "; cin >> monto;
    double descuento;
    if(unidades > 30) {
        descuento = 0.13;
        cout << "Monto a pagar sin descuento: " << monto << " bs." << endl;
        cout << "Monto del descuento: " << (monto*descuento) << " bs." << endl;
        cout << "Monto total a pagar: " << monto - (monto*descuento) << " bs." << endl;
    }else{
        descuento = 0.2;
        cout << "Monto a pagar sin descuento: " << monto << " bs." << endl;
        cout << "Monto del descuento: " << (monto*descuento) << " bs." << endl;
        cout << "Monto total a pagar: " << monto - (monto*descuento) << " bs." << endl;
    }
    return 0;
}
