/* Una persona debe realizar un muestreo con 50 personas para determinar el promedio de peso de los niños, jóvenes, adultos y viejos que existen en su zona habitacional. Se determinan las categorías con base en la sig., tabla: 
a. CATEGORIA EDAD 
i. Niños 0 - 12 
ii. Jóvenes 13 – 29
iii. Adultos 30 - 59 
iv. Viejos 60 en adelante */
#include <iostream>
using namespace std;
int main()
{
    float promedio_niños, promedio_jovenes, promedio_adulto, promedio_viejos;
    int cantidad;
    cout << "Indicame la cantidad de personas que hicieron el estudio "; cin >> cantidad;
    for(int i = 1; i <= cantidad; i++) {
        cout << i;
        int edad;
        cout << "Indicame la edad del paciente: "; cin >> edad;
        if(edad > 0 && edad <= 12) {
            float peso;
            cout << "Indicame el peso del niño: "; cin >> peso;
            promedio_niños += peso;
        }
        if(edad > 13 && edad <= 29) {
            float peso;
            cout << "Indicame el peso del joven: "; cin >> peso;
            promedio_jovenes += peso;
        }
        if(edad > 30 && edad <= 59) {
            float peso;
            cout << "Indicame el peso del adulto: "; cin >> peso;
            promedio_adulto += peso;
        }
        if(edad > 60) {
            float peso;
            cout << "Indicame el peso del viejo: "; cin >> peso;
            promedio_viejos += peso;
        }
    }
    cout << "El promedio de peso de los niños es de: " << (promedio_niños/cantidad) << "\n";
    cout << "El promedio de peso de los jovenes es de: " << (promedio_jovenes/cantidad) << "\n";
    cout << "El promedio de peso de los adultos es de: " << (promedio_adulto/cantidad) << "\n";
    cout << "El promedio de peso de los viejos es de: " << (promedio_viejos/cantidad) << "\n";
    return 0;
}
