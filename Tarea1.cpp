/*Realizar un programa en c++ que devuelva el promedio de 3 números
enteros ingresados por el usuario.*/
#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3, promedio = 0; //Declaración de variables.
    //Petición de números
    cout << "Ingrese 3 numeros enteros:\n"; 
    cout << "Nota 1: "; cin >> n1;
    cout << "Nota 2: "; cin >> n2;
    cout << "Nota 3: "; cin >> n3; 
    //Calcular el promedio.
    promedio = (n1 + n2 + n3)/3;
    //Devolver el dato.
    cout << "El promedio es: " << promedio << endl;


    return 0;
}