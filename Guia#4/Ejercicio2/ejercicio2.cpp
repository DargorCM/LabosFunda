#include <iostream>
using namespace std;
int main(){
    int numero;
    printf("Ingrese un numero \n");
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "Este numero es par";
    }
    else
    {
        cout << "Este numero es impar";
    }
}
