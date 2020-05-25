#include <iostream>
using namespace std;
int main(){
    int numero1, numero2;
    printf("Ingrese el primer numero \n");
    cin >> numero1;
    printf("Ingrese el segundo numero \n");
    cin >> numero2;
    if ((numero1%numero2 == 0) && (numero2 != 0))
    {
       cout << "Los numeros son divisibles";
    }
    else
    {      
        cout << "Los numeros no son divisibles";
    }
    

    


}