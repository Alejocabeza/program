/*El salon de belleza estilos ofrece 3 areas de de servicio corte de cabello, manicuere y limpieza facial. la empresa destaca un programa de sus operaciones diarias, para esto proporciona la siguiente 1: 3 empleadas, una para cada servicio y de ella se conoce la cedula, nombre y suedo basico. 2: se conoce el precio de cada servicio la empresa require calcular e imprimir lo siguien. cantidadd de clientes, cantidad de clientes por servicio. total recibido al finalizar el dia de cada servicio. total a cancelar a cada empleada conociendo el sueldo diario y un 15% de comision por servicio realizado.*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num_clientes = 0, num_clientes_service_1 = 0, num_clientes_service_2 = 0, num_clientes_service_3 = 0;
    float total_ganancias = 0;
    string nombre_op_1 = "maria", nombre_op_2 = "laura", nombre_op_3 = "sofia";
    string cedula_op_1 = "26.788.768", cedula_op_2 = "26.788.768", cedula_op_3 = "26.788.768";
    float sueldo_1 = 100, sueldo_2 = 200, sueldo_3 = 300;
    float precio_service_1 = 200, precio_service_2 = 400, precio_service_3 = 600;
    do {
        num_clientes++;

        int tipo_service = 0;
        cout << "Que servicio desea recibir (1: corte de cabello, 2: manicure, 3: limpieza facial): "; cin >> tipo_service;

        if(tipo_service == 1) {
            num_clientes_service_1 += 1;
            float comision = (precio_service_1*0.15);
            sueldo_1 = sueldo_1 + comision;
            total_ganancias  += precio_service_1;
        }

        if(tipo_service == 2) {
            num_clientes_service_2 += 1;
            float comision = (precio_service_2*0.15);
            sueldo_2 = sueldo_2 + comision;
            total_ganancias  += precio_service_2;
        }

        if(tipo_service == 3) {
            num_clientes_service_3 += 1;
            float comision = (precio_service_3*0.15);
            sueldo_3 = sueldo_3 + comision;
            total_ganancias  += precio_service_3;
        }

        char yes_and_not;
        cout << "Quieres Agregar un nuevo cliente? (s/n) "; cin >> yes_and_not;

        if(yes_and_not == 'n') {
            cout << "Cerrando el programa...";
            break;
        }
    } while (true);
    cout << "Cantidad de clientes que asistieron al local: " << num_clientes << endl;
    cout << "Total de ventas del local hoy: " << total_ganancias << endl;
    cout << "Total de ventas del servicio 1 hoy: " << (precio_service_1*num_clientes_service_1) << endl;
    cout << "Total de ventas del servicio 2 hoy: " << (precio_service_2*num_clientes_service_2) << endl;
    cout << "Total de ventas del servicio 3 hoy: " << (precio_service_3*num_clientes_service_3) << endl;
    cout << "Sueldo Total del dia de la operaria 1: " << sueldo_1 << endl;
    cout << "Sueldo Total del dia de la operaria 2: " << sueldo_2 << endl;
    cout << "Sueldo Total del dia de la operaria 3: " << sueldo_3 << endl;
    return 0;
}
