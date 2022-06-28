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

Producto::Producto()
{
    this->id = 0;
    strcpy(this->nombre, "");
    this->existenciasDeProducto = 0;   
}

ostream& operator << (ostream &o, const Producto *producto)
{
    o << "[" << producto->id << "] - " << producto->nombre << " - Existencias: " << producto->existenciasDeProducto;
    return o;
}