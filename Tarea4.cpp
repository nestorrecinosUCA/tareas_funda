/*Realizar un programa en c++ que reciba 1 producto comprado 
(nombre, precio y cantidad comprada) y mostrar el total de dinero gastado.*/
#include<iostream>
using namespace std;
int main(){
    //Declaración de variables.
    float precio, total = 0;
    int cantidad;
    string producto = "";
    //Solicitud de datos
    cout << "Nombre del producto: ";
    cin >> producto;
    cout << "Precio del producto: $ ";
    cin >> precio;
    cout << "Cantidad de productos: ";
    cin >> cantidad;
    //Ejecución y salida de la solución
    total = precio * cantidad;
    cout << producto << ", total de gasto: $  " << total;
    return 0;
}