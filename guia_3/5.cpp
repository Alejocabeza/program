/* Una persona que va de compras a la tienda “Enano, S.A.”, decide llevar un control sobre lo que va comprando, para saber la cantidad de dinero que tendrá que pagar al llegar a la caja. La tienda tiene una promoción del 20% de descuento sobre aquellos artículos cuya etiqueta sea roja. Determinar la cantidad de dinero que esta persona deberá pagar.  */
#include <iostream>
using namespace std;
int main()
{
    double cantidad = 0;
    double cuenta = 0;
    cout << "Cuantos productos compraste? "; cin >> cantidad;
    int index = 1;
    do {
        int type;
        cout << "Indicame si este producto numero " << index << " tiene etiqueta roja (1: Verdadero, 2: Falso) "; cin >> type;
        if(type == 1) {
            double precio;
            cout << "Indicame el precio del producto numero " << index << " "; cin >> precio;
            cuenta += (precio*0.20);
        }
        if (type == 2){
            double precio;
            cout << "Indicame el precio del producto numero " << index << " "; cin >> precio;
            cuenta += precio;
        }
        if(type != 1 && type != 2) {
            cout << "Por favor ingrese numeros validos";
            break;
        }
        index++;
    } while(index <= cantidad);
    cout << "Tienes que pagar " << cuenta << " Bs";
    return 0;
}
