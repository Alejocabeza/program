// Suponga que un individuo desea invertir su capital en un banco y desea saber cuanto dinero ganara despues de un mes si el banco paga a razon de 2% mensual

#include <iostream>

using namespace std;

int main()
{
    float capital;
    cout << "Cuanto capital desea invertir: "; cin >> capital;
    cout << "Ganaras por cada mes: " << (capital*0.2) + capital;
    return 0;
}
