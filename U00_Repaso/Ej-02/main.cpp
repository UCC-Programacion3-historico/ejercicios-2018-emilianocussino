#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> micalc;
    Calculadora<double> micalcDouble;
    cout << "Ejercicio 00/02\n" << endl;
    cout << "suma: "<< micalc.sumar(2,2) << endl;
    cout <<"resta: "<< micalc.restar(2,2) << endl;
    try{
        cout <<"divisio: "<< micalc.dividir(2,0) << endl;
    }catch (int e){
        cout <<"error : "<<e<<endl;
    }

    cout <<"multiplicacion: "<< micalc.multiplicar(2,4) << endl;
    cout <<"suma: "<< micalcDouble.sumar(5,3) << endl;
    cout << "resta: "<<micalcDouble.restar(7,8) << endl;
    try{
        cout << "division: "<<micalcDouble.dividir(4,0) << endl;
    }catch (int e){
        cout <<"error : "<<e<<endl;
    }

    cout << "multiplicar: "<<micalcDouble.multiplicar(2,2) << endl;
    return 0;
}