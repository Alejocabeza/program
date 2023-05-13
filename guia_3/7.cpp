#include <iostream>
#include <string>
using namespace std;
int main()
{
    int max_clients = 0;
    cout << "Que cantidad de clientes atendiste hoy? ";
    cin >> max_clients;

    int num_clientes = 0;
    while(num_clientes < max_clients) {
        string nombre;
        cout << "Ingrese el nombre del cliente: ";
        cin >> nombre;
        float peso;
        cout << "Ingrese el peso del cliente: ";
        cin >> peso;
        float estatura;
        cout << "Ingrese la estatura del cliente: ";
        cin >> estatura;
        string telefono;
        cout << "Ingrese el telefono del cliente: ";
        cin >> telefono;
        cin.ignore();
    }
}
