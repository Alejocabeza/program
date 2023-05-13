 /* Construir un algoritmo/programa, que calcule el promedio del sueldo de tres trabajadores. Si dicho promedio es superior a 450.000,oo Bs. Se presentará en pantalla el promedio de ingreso y el siguiente mensaje "Trabajadores con buen sueldo”, en caso contrario el sistema no mostrará nada */
 #include <iostream>
 using namespace std;
 int main ()
 {
    double a;
    cout << "Indicame el sueldo del primer trabajador: ";
    cin >> a;

    double b;
    cout << "Indicame el sueldo del segundo trabajador: ";
    cin >> b;

    double c;
    cout << "Indicame el sueldo del tercero trabajador: ";
    cin >> c;

    double promedio = (a+b+c/3);
    if(promedio > 450000) {
        cout << "Su promedio de ingreso es de: " << promedio << endl;
        cout << "Trabajadores con buen sueldo";
    }
    
    return 0;
 }
