//Desarrollar un programa en c++ que permita leer 4 calificaciones de un estudiante. Presentar en pantalla lo siguiente: Todas las notas del estudiante, El valor acumulado de  las 4 notas y La calificación definitiva del estudiante
#include<iostream>
using namespace std;
int main()
{
    float nota_1, nota_2, nota_3, nota_4;
    cout << "Indicame la primera nota del estudiante: "; cin >> nota_1;
    cout << "Indicame la segunda nota del estudiante: "; cin >> nota_2;
    cout << "Indicame la tercera nota del estudiante: "; cin >> nota_3;
    cout << "Indicame la cuarta nota del estudiante: "; cin >> nota_4;
    cout << "El estudiante tiene las siguientes nota: \n";
    cout << "Nota 1: " << nota_1 << "\n";
    cout << "Nota 2: " << nota_2 << "\n";
    cout << "Nota 3: " << nota_3 << "\n";
    cout << "Nota 4: " << nota_4 << "\n";
    cout << "El estudiante tiene un acumulado de: " << (nota_1 + nota_2 + nota_3 + nota_4) << "\n";
    cout << "El estudiante tiene un clasificacion final de: " << (nota_1 + nota_2 + nota_3 + nota_4) / 4 << "\n";
    return 0;
}
