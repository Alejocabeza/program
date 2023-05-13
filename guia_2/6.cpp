/* Se tiene registrado la producción (unidades) logradas por un operario a lo largo 
de la semana (lunes a sábado) Elabore un algoritmo que permita mostrar un 
mensaje si el operario recibirá incentivos, sabiendo que el promedio de 
producción mínima es de 100 unidades.  */
#include <iostream>
using namespace std;
int main()
{
    double prod;
    cout << "Cuanto es la produccion de toda la semana? "; cin >> prod;
    const double PROD_MINIMA = 100;

    if(prod > PROD_MINIMA) {
        double prod_de_mas = (prod / PROD_MINIMA) - PROD_MINIMA;
        if(prod_de_mas > 0) {
            cout << "produccion normal, por esta producción vas a recibir incentivo" << endl;
        }
        if(prod_de_mas >= 100 && prod_de_mas < 200) {
            cout << "Buena produccion, por esta producción vas a recibir incentivo" << endl;
        } 
        if(prod_de_mas >= 200 && prod_de_mas < 300) {
            cout << "Muy buena produccion, por esta producción vas a recibir incentivo" << endl;
        }
        if(prod_de_mas >= 300 && prod_de_mas < 400) {
            cout << "sorprendete produccion, por esta producción vas a recibir incentivo" << endl;
        }
        if(prod_de_mas >= 400) {
            cout << "extraordinaria produccion, por esta producción vas a recibir incentivo" << endl;
            cout << "Felicitaciones" << endl;
        }
        return 0;
    }

    if(prod < PROD_MINIMA) {
        cout << "producción mediocre, por esta mediocre producción no vas a recibir incentivo" << endl;
        return 0;
    }

    return 0;
}
