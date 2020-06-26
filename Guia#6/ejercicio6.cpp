#include <iostream>

using namespace std;

int main()
{
    int cantidad, repetido, suma=0;
    cout << "Ingrese la cantidad de numeros que ingresara" << endl;
    cin >> cantidad;
    int arr[cantidad];
    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Ingrese el numero " << i << endl;
        cin >> arr[i];
    }
    cout << "Numero que desea verificar que se repita" << endl;
    cin >> repetido;
    cout << "Valor a verificar: " << repetido << endl;
    for (int i = 1; i <= cantidad; i++)
    {
        if (repetido == arr[i])
        {
            suma ++;
        }           
    }
    cout << "Repeticiones " << suma;
    
    
}