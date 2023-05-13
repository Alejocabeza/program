// Dada una cantidad en bolivares, obtener la equivalencia en dolares, asumiendo que la unidad cambiaria es un dato desconocido

#include <iostream>

using namespace std;

int main() {
    float bs = 0, usd = 0, changes = 0;
    cout << "Indicame la cantidad de bolivares que deseas cambiar: "; cin >> bs;
    cout << "Indicame la tasa de cambio: "; cin >> changes;
    usd = bs / changes;
    cout << "El equivalente en dolares de " << bs << "bs es igual a " << usd << "usd";
    return 0;
}
