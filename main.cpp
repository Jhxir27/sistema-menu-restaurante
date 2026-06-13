#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Plato
{
    string nombre;
    float precio;
};

int main()
{
    vector<Plato> menu;
    int cantidad;

    cout << "--- SISTEMA DE MENU DE RESTAURANTE ---" << endl;
    cout << "¿Cuantos platos desea registrar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        Plato temp;

        cout << "\nPlato #" << i + 1 << endl;

        cout << "Nombre: ";
        cin >> temp.nombre;

        cout << "Precio: ";
        cin >> temp.precio;

        menu.push_back(temp);
    }

    cout << "\n--- MENU REGISTRADO ---" << endl;

    float suma = 0;

    for (int i = 0; i < menu.size(); i++)
    {
        cout << "Plato: "
             << menu[i].nombre
             << " Precio: S/ "
             << menu[i].precio;

        if (menu[i].precio >= 20)
            cout << " [PREMIUM]";
        else
            cout << " [ECONOMICO]";

        cout << endl;

        suma += menu[i].precio;
    }

    float promedio = suma / menu.size();

    cout << "\nPrecio promedio: S/ " << promedio << endl;

    return 0;
}