#include <iostream>
using namespace std;
int main()
{
    double area, perimetro, radio;
    printf("Ingrese el radio del circulo \n");
    cin >> radio;
    area = 3.14*(radio*radio);
    perimetro = 2*3.14*radio;
    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;
    system("pause");

    return 0;


}