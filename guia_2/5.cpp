/* Desarrollar un algoritmo que lea la edad de una persona en el caso que la edad 
sea superior a 60 años, se le otorgara un bono de 15.000 bs. presentar en 
pantalla la edad de la persona registrada y el monto del bono asignado. */
#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "Indicame la edad del usuario: "; cin >> edad;
    int bono = 0;
    if (edad > 60) {
        bono = 15000;
        cout << "La edad del usuario es de: " << edad << " años" << endl;
        cout << "El bono asignado a esta edad es de: " << bono << " Bs." << endl;
        return 0;
    }
    cout << edad;
    cout << "El bono asignado a esta edad es de: " << bono << endl;
    return 0;
}
