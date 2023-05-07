/* Un mayorista compra a un agricultor un lote de “X” naranjas a Bs. “Y” la docena. Después 
de vender todas las naranjas a los detallistas, obtiene Bs.”K”. Calcular el porcentaje de 
ganancia obtenida en la inversión.  */
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e ;
    cout << "Que cantidad de lote se compro? "; cin >> a;
    cout << "Que valor tubo la doce por lote? "; cin >> b;
    cout << "Que cantidad obtuvo de vender todo el producto? "; cin >> c;
    d = (a / 12) * b;
    e = (d / c) * 100;
    cout << "La cantidad que invertiste fue de: " << d << "bs";
    cout << "La cantidad de retorno fue de: " << e << "%";
    return 0;
}
