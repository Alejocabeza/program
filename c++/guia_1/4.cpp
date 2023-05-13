// Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes
#include <iostream>
using namespace std;
int main()
{
    float hombres = 0, mujeres = 0, total = 0;
    cout << "Cuantos hombres hay en tu clase: "; cin >> hombres;
    cout << "Cuantos mujeres hay en tu clase: "; cin >> mujeres;
    total = hombres + mujeres;
    cout << "El porcentaje de hombres es del: " << (hombres/total)*100 << "% y el porcentaje de mujeres es del: " << (mujeres/total)*100 << '%';
    return 0;
}
