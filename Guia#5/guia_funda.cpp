#include <iostream>
#include <ctime>

using namespace std;

int mcd(int, int);
void Ejercicio2();
bool bisiesto(int);
void Ejercicio4();

int main()
{
    int opcion;
    do
    {

        cout << "-- Eliga una opcion para un ejercicio ---" << endl;
        cout << " 1) Retorno de MCD \n 2) Hora en formato de 24 horas \n 3) Anio Bisiesto \n 4) Fecha \n 5) Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            int numero1, numero2;
            cout << "Ingrese el primer numero" << endl;
            cin >> numero1;
            cout << "Ingrese el segundo numero" << endl;
            cin >> numero2;
            cout << "El MCD es " << mcd(numero1, numero2) << endl;
            break;
        case 2:
            Ejercicio2();
            break;
        case 3:
            int anio;
            cout << "Ingrese un anio \n";
            cin >> anio;
            bisiesto(anio) ? cout << "Este anio es bisiesto \n" : cout << "Este anio no es bisiesto \n";
            break;
        case 4:
            Ejercicio4();
            break;
        case 5:
            return 0;
            break;
        default:
            cout << "< Numero no valido > \n";
            break;
        }

    } while (opcion > 0 || opcion <= 5);
}

int mcd(int a, int b)
{

    int a1, b1, residuo = 1;
    while (residuo != 0)
    {
        a1 = a;
        b1 = b;
        residuo = a1 % b1;
        a = b1;
        b1 = residuo;
        b = b1;
    }
    return a;
}

void Ejercicio2()
{
    int horas, mins, seg;
    do
    {
        cout << "Ingrese las horas (0-23)" << endl;
        cin >> horas;
    } while (horas < 0 || horas > 23);
    do
    {
        cout << "Ingrese los minutos (0-59)" << endl;
        cin >> mins;
    } while (mins < 0 || mins > 59);
    do
    {
        cout << "Ingrese los segundos (0-59)" << endl;
        cin >> seg;
    } while (seg < 0 || seg > 59);
    seg = seg + 1;
    if (seg >= 60)
    {
        seg = 00;
        mins = mins + 1;
        if (mins >= 60)
        {
            mins = 00;
            horas = horas + 1;
            if (horas >= 24)
            {
                horas = 00;
            }
        }
    }
    cout << "\n";
    cout << "La hora sumada con 1 seg es de: ";
    if (horas < 10)
        cout << 0;
    cout << horas;
    cout << ":";
    if (mins < 10)
        cout << 0;
    cout << mins;
    cout << ":";
    if (seg < 10)
        cout << 0;
    cout << seg << endl;
    cout << "\n";
}

bool bisiesto(int anio)
{
    // Declaramos variable para el anio
    bool bisiesto;
    if (anio % 400 == 0 || anio % 4 == 0 && anio % 100 != 0)
    {
        bisiesto = true;
        return bisiesto;
    }
    else
    {
        bisiesto = false;
        return bisiesto;
    }
}

void Ejercicio4()
{
    int dia, mes, anio;
    do
    {
        cout << "Ingrese un anio" << endl;
        cin >> anio;
    } while (anio < 1);
    do
    {
        cout << "Ingrese un mes" << endl;
        cin >> mes;
    } while (mes < 1 || mes > 12);
    switch (mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        do
        {
            cout << "Ingrese un dia valido (1-30)" << endl;
            cin >> dia;
        } while (dia < 1 || dia > 30);
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        do
        {
            cout << "Ingrese un dia valido (1-31)" << endl;
            cin >> dia;
        } while (dia < 1 || dia > 31);
        break;
    case 2:
        if (bisiesto(anio))
        {
            do
            {
                cout << "Ingrese un dia valido (1-29)" << endl;
                cin >> dia;
            } while (dia < 1 || dia > 29);
        }
        else
        {
            do
            {
                cout << "Ingrese un dia valido (1-28)" << endl;
                cin >> dia;
            } while (dia < 1 || dia > 28);
        }
        break;
    }
    dia = dia + 1;
    switch (mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        if (dia > 30)
        {
            dia = 0;
            dia = dia + 1;
            mes = mes + 1;
            if (mes > 12)
            {
                mes = 0;
                mes = mes + 1;
                anio = anio + 1;
            }
        }

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (dia > 31)
        {
            dia = 0;
            dia = dia + 1;
            mes = mes + 1;
            if (mes > 12)
            {
                mes = 0;
                mes = mes + 1;
                anio = anio + 1;
            }
        }
        break;
    case 2:
        if (bisiesto(anio))
        {
            if (dia > 29)
            {
                dia = 0;
                dia = dia + 1;
                mes = mes + 1;
                if (mes > 12)
                {
                    mes = 0;
                    mes = mes + 1;
                    anio = anio + 1;
                }
            }
        }
        else
        {
            if (dia > 28)
            {
                dia = 0;
                dia = dia + 1;
                mes = mes + 1;
                if (mes > 12)
                {
                    mes = 0;
                    mes = mes + 1;
                    anio = anio + 1;
                }
            }
        }
        break;
    }
    cout << "La fecha sumada es " << dia << ":" << mes << ":" << anio << endl;
}