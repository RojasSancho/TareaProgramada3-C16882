#include "producto.h"
#include <iostream>
#include <fstream>

using namespace std;

Producto::Producto(int id, string nombre, int existenciasDeProducto)
{
    this->id = id;
    strcpy(this->nombre, nombre.c_str());
    this->existenciasDeProducto = existenciasDeProducto;

}