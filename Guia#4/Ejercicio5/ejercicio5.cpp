#include <iostream>
using namespace std;
int main(){
    string palabra;
    printf("Ingrese una palabra: \n");
    cin >> palabra;

    /* 
        Este arreglo recorre toda la palabra para comparar letras mayusculas
        y convertirlas a minuscula, ya que si no se convierte sucede esto:
        Ala != ala
    */ 
    for (int i = 0; i < palabra.length(); i++) {
    palabra[i] = tolower(palabra[i]);
    }
    /*
        Hacemos la comparacion de la primera y ultima palabra
    */

    if (palabra[0] == palabra[palabra.length()-1])
    {
        cout << "Inicia y termina con la misma letra";
    }
    else
    {
        cout << "Inicia y termina con distinta letras";
    }
    
    
} 