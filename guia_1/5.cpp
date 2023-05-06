//Obtener la edad de una persona en meses, si se ingresa su edad en años y meses. Por ejemplo: si se ingresan 3 años y 4 meses debe mostrar 40 meses.
#include <iostream>
using namespace std;
int main()
{
    int years = 0, mouth = 0;
    cout << "Cuantos años tienes? "; cin >> years;
    cout << "Tienes meses recorridos? "; cin >> mouth;
    mouth = (12*years)+mouth;
    cout << "Tu edad en meses es de: " << mouth << " Meses"; 
    return 0;
}
