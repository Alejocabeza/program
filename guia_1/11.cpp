/* Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganara después de un mes si el banco paga a razón de 2% mensual. */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float capital = 0;
    cout << "Cuanto capital desea invertir: "; cin >> capital;
    cout << "Ganaras por cada mes: " << (capital*0.2) + capital;
    return 0;
}
