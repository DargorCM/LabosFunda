#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, resultadoa, resultadob, resf1, resf2;
    printf("Ingrese el valor a \n");
    cin >> a;
    printf("Ingrese el valor b \n");
    cin >> b;
    printf("Ingrese el valor c \n");
    cin >> c;

    resultadoa = (-(b) - sqrt((b*b) - 4*a*c));
    resultadob = (-(b) + sqrt((b*b) - 4*a*c));
    resf1 = resultadoa/2*a;
    resf2 = resultadob/2*a;

    if (resf1 != resf1)
    {
        printf("Es imposible en los reales \n");
    }
    else
    {
    cout << "El resultado A de la ecuacion es: " << resf1 << endl;
    cout << "El resultado B de la ecuacion es: " << resf2 << endl;      
    }
    system("pause");
    return 0;  


}