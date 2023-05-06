//Dados como datos el precio final pagado por un producto y su precio de venta al público  (PVP), se requiere que calcule y muestre el porcentaje de descuento que le ha sido aplicado.
#include <iostream>
using namespace std;
int main()
{
    float precio_final, importe_pagado, descuento;
    cout << "Cuanto fue el precio final del producto: "; cin >> precio_final;
    cout << "Cuanto fue el importe pagado que pagaste: "; cin >> importe_pagado;
    descuento = (precio_final - importe_pagado);
    cout << "El descuento que recibiste fue de: " << (descuento/precio_final)*100 << "%";
    return 0;
}
