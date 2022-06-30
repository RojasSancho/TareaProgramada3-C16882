#include "producto.h"
#include "tienda.h"

#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

using namespace std;

int main() 
{
    /*
    cout << sizeof(Producto) << endl;
    Tienda *tienda = new Tienda("Los Gallos", "gallosucr@ac.cr", "Calle Los Coyoles", "22451312");
    Producto *producto = new Producto(1, "Suavitel", 15);

    tienda->InsertarProducto(producto);

    Producto *producto2 = new Producto(2, "Tele", 6);

    tienda->InsertarProducto(producto2);

    ofstream archivoSalida;
    archivoSalida.open("tienda.dat", ios::out|ios::binary);

    if(!archivoSalida.is_open())
    {
        cerr << "no se";
        return -1;
    }

    tienda->GuardarEnStreamBinario(&archivoSalida);

    ifstream archivoEntrada;
    archivoEntrada.open("tienda.dat", ios::in|ios::binary);

    if(!archivoEntrada.is_open())
    {
        cerr << "no se pudo";
        return -1;
    }
    Tienda *tienda = new Tienda();

    tienda->CargarDesdeStreamBinario(&archivoEntrada);

    Producto *producto3 = new Producto(3, "Vaso", 34);

    tienda->InsertarProducto(producto3);

    cout << tienda;
    */

    //Borrar producto de tienda
    Tienda *tienda = new Tienda("Los Gallos", "gallosucr@ac.cr", "Calle Los Coyoles", "22451312");
    
    Producto *producto1 = new Producto(2, "Tele", 6);
    Producto *producto2 = new Producto(1, "Suavitel", 15);
    Producto *producto3 = new Producto(45, "Nashei", 21);

    tienda->InsertarProducto(producto1);
    tienda->InsertarProducto(producto2);
    tienda->InsertarProducto(producto3);

    cout << tienda;

    tienda->EliminarProducto(1);

    cout << tienda->ConsultarTodosLosProductos();

}
