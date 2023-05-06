//Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior

#include <iostream>

using namespace std;

int main() {
    float salario = 0;
    cout << "Cual es tu salario: "; cin >> salario;
    cout << "tu incremento es de: " << (salario*0.25) << "bs" << " tu salario actualizado es de: " << (salario*0.25) + salario << "bs";
    return 0;
}
