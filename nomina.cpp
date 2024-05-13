#include <iostream>
using namespace std;
int main()
{
    string nombre;
    float horas;
    float tarifa;
    tarifa = 10;
    cout << "Ingrese su nombre" << "\n";
    cin >> nombre;
    cout << "Ingrese sus horas trabajadas" << "\n";
    cin >> horas;
    if (horas <= 160)
    {
        tarifa = tarifa * horas;
        if (tarifa <= 2000)
        {
            cout << nombre << "\n";
            cout << "Su sueldo esta libre de impuestos y el total es " << tarifa << "\n";
        }
    }
    else if (horas > 160)
    {
        tarifa = tarifa * horas;
        float horasextra;
        horasextra= horas-160;
        horasextra = horasextra * 1.5;
        tarifa = tarifa+horasextra;
        if (tarifa > 2000 && tarifa <= 2200)
        {
            tarifa = tarifa *0.2;
            cout << nombre << "\n";
            cout << "A su sueldo se le redujo el %20 de impuestos y el sueldo quedo como " << tarifa;
        }
        else if (tarifa >= 2201)
        {
            tarifa = tarifa *0.3;

            cout << nombre << "\n";
            cout << "A su sueldo se le redujo el %30 de impuestos y el sueldo quedo como " << tarifa;
        }
        else{
             cout << nombre << "\n";
            cout << "A su sueldo quedo como " << tarifa;
        }
    }
    return 0;
}