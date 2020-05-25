#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    int cantipalabras;
    printf("Escriba una palabra \n");
    cin >> palabra;
    cantipalabras= palabra.length();
    if (cantipalabras > 10)
    {
        cout << "Esta palabra tiene mas de 10 caracteres \n";
    }
    else
    {
        cout << "Esta palabra no tiene una cantidad mayor a 10 caracteres \n";
    }
    if (cantipalabras % 2 == 0)
    {
        cout << "Esta palabra tiene una cantidad de caracteres par";
    }
    else
    {
        cout << "Esta palabra tiene una cantidad de caracteres impar";
    }
    
    


    
    
}