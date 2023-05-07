/* Realizar un algoritmo que permita registrar la cantidad de metros recorridos por 
un ciclista en una hora. En caso que recorra menos de 50 Kms, se presentará 
un mensaje con la cantidad de kms recorridos e indicándole que "DEBE 
ENTRENAR MÁS POR ENCONTRARSE POR DEBAJO DE LOS 
PARÁMETROS MINIMOS */
#include <iostream>
using namespace std;
int main()
{
    int metros;
    cout << "Cuantos kilometros recorriste? "; cin >> metros;
    if(metros <= 50) {
        cout << "DEBE ENTRENAR MÁS POR ENCONTRARSE POR DEBAJO DE LOS PARÁMETROS MINIMOS";
    } else {
        cout << "FELICIDADES TIENES UN EXCELENTE TIEMPO";
    }
    return 0;
}
