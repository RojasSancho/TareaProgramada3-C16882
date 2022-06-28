#include "producto.h"
#include "tienda.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() 
{

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
        cerr << "";
        return -1;
    }

    tienda->GuardarEnStreamBinario(&archivoSalida);
}