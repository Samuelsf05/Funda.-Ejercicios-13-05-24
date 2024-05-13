#include <iostream>

 using namespace std;
 int main(){
    int piso;

    cout << "Ingrese al piso que quiere ir (1 - 25): \n";
    cin >> piso;

    if (piso == 1){
        cout << "Esta en el piso 1, desaea subir?\n"; 
        }
    else if (piso <= 24){
        cout<< "Esta en el piso " << piso << " que desa hacer subir - bajar?\n";
    }
    else{
        cout << "Esta en el piso 25 desea bajar?\n";
    }

    return 0;
 }