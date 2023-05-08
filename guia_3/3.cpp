/* Se desea obtener el promedio de g grupos que están en un mismo año escolar; siendo que cada grupo puede tener n alumnos que cada alumno puede llevar m materias y que en todas las materias se promedian tres calificaciones para obtener el promedio de la materia. Lo que se desea desplegar es el promedio de los grupos, el promedio de cada grupo y el promedio de cada alumno. */
#include <iostream>
using namespace std;
int main()
{
    int grupos;
    int promedio_grupos;
    int index = 1;
    cout << "Indicame la cantidad de grupos que hay en el mismo año escolar: "; cin >> grupos;
    while(index <= grupos) { 
        int alumnos;
        cout << "Indicame la cantidad de alumnos que hay en el grupo numero " << index << ": "; cin >> alumnos;
        int promedio_grupo;
        for(int a = 1; a <= alumnos; a++) {
            int materias;
            cout << "Indicame la cantidad de materias del alumno " << a << ": "; cin >> materias;
            int promedio_alumno;
            for(int b = 1; b <= materias; b++) {
                double nota_1;
                cout << "Indicame la nota numero " << b << " del alumno " << a << ": "; cin >> nota_1;
                if(nota_1 > 20){ nota_1 = 20; }
                double nota_2;
                cout << "Indicame la nota numero " << b << " del alumno " << a << ": "; cin >> nota_2;
                if(nota_2 > 20){ nota_2 = 20; }
                double nota_3;
                cout << "Indicame la nota numero " << b << " del alumno " << a << ": "; cin >> nota_3;
                if(nota_3 > 20){ nota_3 = 20; }
                double promedio_materia = (nota_1 + nota_2 + nota_3) / 3;
                cout << "El promedio del alumno " << a << " en esta materia es de: " << promedio_materia<< "\n";
                promedio_alumno += promedio_materia;
            }
            promedio_alumno = (promedio_alumno / materias);
            cout << "El promedio del alumno " << a << " es: " << promedio_alumno << "\n";
            promedio_grupo += promedio_alumno;
            promedio_alumno = 0;
        }
        cout << "Promedio del grupo " << index << " es " << (promedio_grupo/alumnos) << "\n" ;
        promedio_grupos += promedio_grupo;
        promedio_grupo = 0;
        index++;
    }
    cout << "El promedio de todos los grupos es " << (promedio_grupos/grupos) << "\n";
    return 0;
}
