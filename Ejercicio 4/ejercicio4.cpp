#include <iostream>
using namespace std;
int main()
{
    double precio, resultado;
    int cantidad;
    string producto;
    printf("Ingresa el producto que vas a comprar \n");
    cin >> producto;
    printf("Ingrese el precio del producto que compraras \n");
    cin >> precio;
    printf("Ingrese la cantidad que adquirira \n");
    cin >> cantidad;
    resultado = cantidad*precio;
    cout << "El total por la compra de " << producto << " con una cantidad de " << cantidad << " es de : " << resultado << "$" << endl;
    system("pause");

    return 0;

}