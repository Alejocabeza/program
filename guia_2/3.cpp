/* Realizar un algoritmo/programa que calcule la calificación definitiva de un estudiante que tiene registradas 4 notas con la siguiente ponderación: nota 1 = 
16%, nota 2= 24%, nota 3= 27%, nota 4= 33%. * Presentar en pantalla los datos básicos del estudiante, la calificación definitiva y su valoración cualitativa de "APROBADO" o "REPROBADO”, según corresponda */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nombre;
    cout << "Indicame el nombre del estudiante: "; cin >> nombre;

    string cedula;
    cout << "Indicame la cedula del estudiante: "; cin >> cedula;

    float nota_1;
    cout << "Indicame la primera nota: "; cin >> nota_1;
    nota_1 = (nota_1*0.16);

    float nota_2;
    cout << "Indicame la segunda nota: "; cin >> nota_2;
    nota_2 = (nota_2*0.24);

    float nota_3;
    cout << "Indicame la tercera nota: "; cin >> nota_3;
    nota_3 = (nota_3*0.27);

    float nota_4;
    cout << "Indicame la tercera nota: "; cin >> nota_4;
    nota_4 = (nota_4*0.33);

    float definitiva;
    definitiva = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    //ouput
    cout << "Nombre: " << nombre << endl;
    cout << "Cedula: " << cedula << endl;
    cout << "La nota definitiva del estudiante es de: " << definitiva << "\n";
    return 0;
}
