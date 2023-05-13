/* En la Cámara de Diputados se levanta una encuesta con todos los integrantes con el fin de determinar qué porcentaje de los n diputados está a favor del Tratado de Libre Comercio, que porcentaje está en contra y que porcentaje se abstiene de opinar.  */
#include <iostream>
using namespace std;
int main()
{
    int n;
    int abstencion, en_contra, a_favor, voto;
    cout << "Indicame la cantidad de diputados: "; cin >> n;
    for(int i = 1; i <= n; i++) { 
        cout << "Indicame el voto del diputado numero " << i << " con respecto al tratado de libre comercio (1: a favor, 2: en contra, 3: abstencion): "; cin >> voto;
        if(voto == 1 || voto < 1) {
            a_favor += 1;
        }
        if(voto == 2) {
            en_contra += 1;
        }
        if(voto == 3 || voto > 3) {
            abstencion += 1;
        }
    }
    cout << "Votos a favor: " << a_favor << endl;
    cout << "Votos en contra: " << en_contra << endl;
    cout << "Votos abstenidos: " << abstencion << endl;
    return 0;
}
