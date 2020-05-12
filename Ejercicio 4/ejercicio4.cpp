#include <iostream>
using namespace std;
int main()
{
    double precio, resultado;
    int cantidad;
    char nombre, producto;
    printf("Bienvenido, por favor ingrese su nombre \n");
    cin >> nombre;
    printf("Ingresa el producto que vas a comprar \n");
    cin >> producto;
    printf("Ingrese la cantidad que compraras \n");
    cin >> cantidad;
    resultado = cantidad*producto;
    cout << nombre << " el total por la compra de " << producto << " con una cantidad de " << cantidad << " es de : " << resultado << "$" << endl;
    system("pause");

    return 0;

}