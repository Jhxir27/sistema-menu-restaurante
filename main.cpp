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

    cout << "\n=== ANALISIS DEL MENU ===" << endl;

if (promedio <= 10)
{
    cout << "Tipo de menu: Economico" << endl;
}
else if (promedio <= 20)
{
    cout << "Tipo de menu: Accesible" << endl;
}
else if (promedio <= 30)
{
    cout << "Tipo de menu: Estándar" << endl;
}
else
{
    cout << "Tipo de menu: Premium" << endl;
}

cout << "\n=== RECOMENDACION ===" << endl;

if (promedio <= 10)
{
    cout << "Agregar combos económicos o promociones." << endl;
}
else if (promedio <= 20)
{
    cout << "Mantener precios accesibles para clientes frecuentes." << endl;
}
else if (promedio <= 30)
{
    cout << "Buen equilibrio entre calidad y precio." << endl;
}
else
{
    cout << "Menu premium dirigido a clientes exclusivos." << endl;
}
    return 0;
}
