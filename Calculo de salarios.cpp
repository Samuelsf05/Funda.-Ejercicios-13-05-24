#include <iostream>
// Un programa para calcular salrio, junto con descuento de impuestos.
 using namespace std;
 int main()
 {
    float h, extra, pago, bruto, impuesto;
    string nombre;

// se piden el nombre del trabaajdor y las horas que trabajo en el mes.
    cout << "Ingrese su nombre: " << "\n";
    cin >> nombre;

    cout << "Ingrese las horas trabajadas: " << "\n";
    cin >> h;

//se calcula el salario sin impuesto si trabjo menos o 160 ya que estas no sobrepasaran l0s $2000.
    if(h <= 160){
        pago = h * 10;
        cout << "Su pago sera: $" << pago << "\n";
    }
// si se tienen mas de 160 horas se calculan cuantas de esas son horas extras para cobrarse por 1.5 del valor original.
    else{
        extra = h - 160;
        pago = h * 10 + extra * 1.5;
    // aqui aun no se calcula un impuesto aun.
        if(pago <= 2000){
            cout << "Su impuesto es 0\n";
            cout << "Su pago sera de: $" << pago << "\n";
        }
        // Se calculan los impuestos si estas se cobraran por mas de $2000 hasta $2200, se descauenta el 20%, si sobrepasan los $2200 se cobaran 30% de impuestos.↓ 
        else if(pago <= 2200){
            impuesto = pago * 0.2;
            bruto = pago - impuesto;

        cout << "Su impuesto sera de: $" << impuesto << "\n";
        cout << "Su pago sera de: $" << bruto << "\n";
        }
        else{
            impuesto = pago * 0.3;
            bruto = pago - impuesto;

        cout << "Su impuesto sera de: $" << impuesto << "\n";
        cout << "Su pago sera de: $" << bruto << "\n";
        }

    }

    return 0;
 }