/* Realizar un algoritmo/programa que calcule la calificación definitiva de un 
estudiante que tiene registradas 4 notas con la siguiente ponderación: nota 1 = 
16%, nota 2= 24%, nota 3= 27%, nota 4= 33%. * Presentar en pantalla los datos 
básicos del estudiante, la calificación definitiva y su valoración cualitativa de 
"APROBADO" o "REPROBADO”, según corresponda */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nombre;
    cout << "Nombre completo del estudiante: "; cin >> nombre;

    int nota_1;
    cout << "Indicame la primera nota: "; cin >> nota_1;
    nota_1 = (nota_1*0.16);

    int nota_2;
    cout << "Indicame la segunda nota: "; cin >> nota_2;
    nota_2 = (nota_2*0.24);

    int nota_3;
    cout << "Indicame la tercera nota: "; cin >> nota_3;
    nota_3 = (nota_3*0.27);

    int nota_4;
    cout << "Indicame la tercera nota: "; cin >> nota_4;
    nota_4 = (nota_4*0.33);

    float definitiva;
    definitiva = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    //ouput
    cout << nombre << "\n";
    cout << "La nota definitiva del estudiante es de: " << definitiva << "\n";
    return 0;
}
