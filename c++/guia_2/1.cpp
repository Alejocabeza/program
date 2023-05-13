/* Realice un algoritmo/programa que pida tres dígitos enteros. Seguidamente indicar cuál de ellos es el mayor, cual es el menor y cuál es el intermedio */
#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Indicame el primer numero: ";
    cin >> num1;

    int num2;
    cout << "Indicame el segundo numero: ";
    cin >> num2;

    int num3;
    cout << "Indicame el tercer numero: ";
    cin >> num3;

    int mayor = num1;
    if(num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    int menor = num1;
    if(num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    int intermedio = num1;
    if ((num2 > menor) && (num2 < mayor)) {
        intermedio = num2;
    }
    if ((num3 > menor) && (num3 < mayor)) {
        intermedio = num3;
    }

    cout << "El numero mayor es: " << mayor << "\n";
    cout << "El numero menor es: " << menor << "\n";
    cout << "El numero intermedio es: " << intermedio << "\n";
    return 0;
}
