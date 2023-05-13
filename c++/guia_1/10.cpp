/* Un corredor reporta el número de minutos que corre en un año. Escribir un programa que dé como salida la cantidad de tiempo equivalente en meses, semanas, días, horas y 
minutos. */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float months, weeks, days, hours, mins;
    cout << "Cuantos minutos recorriste? "; cin >> mins;
    cout << "Minutos recorridos: " << round(mins) << " minutos \n";
    //Hours
    hours = mins/60;
    cout << "Horas recorridas: " << round(hours) << " Horas \n";
    //days
    days = hours/24;
    cout << "Dias recorridos: " << round(days) << " Dias \n";
    // weeks
    weeks = days/7;
    cout << "Semanas recorridos: " << round(weeks) << " Semanas \n";
    //months
    months = days/12;
    cout << "Meses recorridos: " << round(months) << " Meses \n";
    return 0;
}
