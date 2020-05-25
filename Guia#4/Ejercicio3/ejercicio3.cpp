#include <iostream>
using namespace std;
int main(){
    int numero;
    printf("Ingrese un numero \n");
    cin >> numero;
    if (numero < 0)
    {
        cout << "Este numero es negativo";
    }
    else if (numero > 0)
    {  
       cout << "Este numero es positivo"; 
    }
    else
    {
        cout << "El numero que ingreso es 0";
    }
    
    
    
    
    
}