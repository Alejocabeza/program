/* Un negocio de copias tiene un límite de producción diaria de 10 000 copias si el tipo de impresión es offset y de 50 000 si el tipo es estándar. Si hay una solicitud de un el empleado tiene que verificar que las copias pendientes hasta el momento y las copias solicitadas no excedan del límite de producción. Si el límite de producción se excediera el trabajo solicitado no podría ser aceptado. El empleado necesita llevar un buen control de las copias solicitadas hasta el momento para decidir en forma rápida si los trabajos que se soliciten en el día se deben aceptar o no */
#include <iostream>

using namespace std;

bool copIsEmpty(int x);
int updateVariables(int a, int b, int c);

int main()
{
    int total = 60000;
    int offset = 10000;
    int estandar = 50000;

    if(total > 0) {
        cout << "Aun te quedan copias permitidad!!" << endl;
        for(int i = 1; i <= total; i++) {
            int cantidad = 0;
            cout << "Cuantas copias desea? "; cin >> cantidad;

            int offsetIsEmpty = copIsEmpty(offset);
            int estandarIsEmpty = copIsEmpty(estandar);

            if(offsetIsEmpty == false && estandarIsEmpty == false) {
                int type = 0;
                cout << "indicame que tipo de copias deseas? (1: offset, 2: estandar) "; cin >> type;
                if(type == 1) {
                    offset = updateVariables(cantidad, type, offset);
                }
                if(type == 2) {
                    estandar = updateVariables(cantidad, type, estandar);
                }
            }
            total = (offset + estandar);
            cout << "Te quedan aun " << offset << " copias de tipo offset y " << estandar << " copias de tipo estandar" << endl;
        }
    }

    return 0;
}

bool copIsEmpty(int x) 
{
    if(x == 0) {
        return true;
    } 
    return false;
}

int updateVariables(int a, int b, int c) {
    int value = 0;
    for(int i = 1; i <= a; i++) {
        value = (c - i);
    }
    return value;
}
