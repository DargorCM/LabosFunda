#include <iostream>

using namespace std;

int main()
{
    int numero = 1;
    int arr[100];
    arr[0]=numero;
    for (int i = 1; i < 100; i++)
    {
        numero++;
        if (numero % 2 == 0)
        {
            arr[i] = numero + 1;
            numero++;
        }
        else
        {
            arr[i] = numero;
        }
    }
    for (int i = 99; i > -1; i--)
    {
        cout << arr[i] << endl;
    }
}