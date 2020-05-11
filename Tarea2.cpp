/*Realizar un programa en c++ que reciba el radio de un círculo y calcular su área y perímetro.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int radio, area = 0, perimetro = 0; //Declaración de variables.
    float pi = 3.141592;
    //Solicitar el Radio.
    cout << "Digite el radio de un circulo: ";
    cin >> radio;
    //Calcular el área (PI * Radio^2).
    area = pi * (pow(radio,2));
    //Calcular el perímetro (2 * PI * Radio).
    perimetro = 2 * pi * radio;
    //Devolver el valor.
    cout << "El area del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl;

    return 0;
}