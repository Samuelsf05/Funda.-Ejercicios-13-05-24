#include <iostream>

 using namespace std;
 int main(){
    float x, y, resultado;
    int o, operacion;

    cout << "Que calculo quires hacer?, seleccione una opcion: \n";
    cout << "1. Suma. \n";
    cout << "2. Resta. \n";
    cout << "3. Multiplacion. \n";
    cout << "4. Divison. \n";
    cout << "5. Par o Impar. \n";
    cin >> operacion;

    switch(operacion){
        case 1:
        cout << "Ingrese su primer numero: \n";
        cin >> x;
        cout << "Ingrese su segundo numero: \n";
        cin >> y;
        resultado = x + y;
        cout << "Su resultado es: " << resultado << "\n";
        break;

        case 2:
        cout << "Ingrese su primer numero: \n";
        cin >> x;
        cout << "Ingrese su segundo numero: \n";
        cin >> y;
        resultado = x - y;
        cout << "Su resultado es: " << resultado << "\n";
        break;

        case 3:
        cout << "Ingrese su primer numero: \n";
        cin >> x;
        cout << "Ingrese su segundo numero: \n";
        cin >> y;
        resultado = x * y;
        cout << "Su resultado es: " << resultado << "\n";
        break;

        case 4:
        cout << "Ingrese su primer numero: \n";
        cin >> x;
        cout << "Ingrese su segundo numero: \n";
        cin >> y;
        resultado = x / y;
        cout << "Su resultado es: " << resultado << "\n";
        break;

        case 5:
        cout << "Ingrese su numero: \n";
        cin >> o;
        if (o % 2 == 0){
            cout << "Su numero es par.";
        }
        else {
            cout << "Su numero es impar.";
        }
        break;
    }

    return 0;

 }