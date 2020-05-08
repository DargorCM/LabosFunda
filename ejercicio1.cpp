#include <iostream>
using namespace std;
int main()
{
    double numero1, numero2, numero3;
    printf("Ingrese el primer valor \n");
    cin >> numero1; 
    printf("Ingrese el segundo valor \n");
    cin >> numero2;
    printf("Ingrese el tercer valor \n");
    cin >> numero3;
    double resultado = (numero1+numero2+numero3)/3;
    cout << "El promedio de estos numeros es: " << resultado <<  "\n"; 
    system("pause");
    return 0;


}