/*Realizar un programa en c++ que reciba a, b y c y nos devuelva el resultado de la fórmula cuadrática.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    float  nPositivo = 0, nNegativo = 0;  //Declarar variables.
    //Solicitar datos al ususario.
    cout << "Ingrese los datos de a, b y c sucesivamente: " << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    //Resolución del problema.
    nPositivo = (-b + (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);
    nNegativo = (-b - (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);
    //Devolver los valores.
    cout << "El resultado en positivo es: " << nPositivo << endl;
    cout << "El resultado en negativo es: " << nNegativo << endl;

    return 0;
}