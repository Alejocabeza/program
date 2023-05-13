/* Cinco miembros de un club contra la obesidad desean saber cuánto han bajado o subido de peso desde la última vez que se reunieron. Para esto se debe realizar un ritual de pesaje en donde cada uno se pesa en diez básculas distintas para así tener el promedio más exacto de su peso. Si existe diferencia positiva entre este promedio de peso y el peso de la última vez que se reunieron, significa que subieron de peso. Pero si la diferencia es negativa, significa que bajaron. Lo que el problema requiere es que por cada persona se imprima un letrero que diga: “SUBIO” o “BAJO” y la cantidad de kilos que subió o bajo de peso.  */
#include <iostream>
using namespace std;
int main()
{
    int cantidad = 2;
    int index = 1;
    while(index >= cantidad) {
        int peso_viejo = 0;
        cout << "Indicame el peso anterios al ritual de bascula: "; cin >> peso_viejo;
        int peso = 0;
        for(int index = 1; index <= 2; index++) {
            int nuevo_peso = 0;
            cout << "Indicame el " << index << " valor del ritual de pesaje: "; cin >> nuevo_peso;
            peso += nuevo_peso;
            peso = (peso / 2);
        }
        if(peso > peso_viejo) {
            cout << "SUBIO DE PESO TIENES " <<  peso_viejo - peso  << " KILOS DE MAS \n";
        }
        if (peso < peso_viejo) {
            cout << "BAJO DE PESO TIENES " <<  peso - peso_viejo  << " KILOS DE MENOS \n";
        }
    }
    return 0;
}
