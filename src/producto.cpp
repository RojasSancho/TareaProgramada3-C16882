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

void Producto::CambiarNombre(string nuevoNombre)
{
    strcpy(this->nombre, nuevoNombre.c_str());
}

void Producto::CambiarNumeroDeExistencias(int nuevasExistencias)
{
    this->existenciasDeProducto = nuevasExistencias; 
}

int Producto::ConsultarID()
{
    return this->id;
}

string Producto::ConsultarNombre()
{
    return this->nombre;
}

int Producto::ConsultarNumeroDeExistencias()
{
    return this->existenciasDeProducto;
}

ostream& operator << (ostream &o, const Producto *producto)
{
    o << "[" << producto->id << "] - " << producto->nombre << " - Existencias: " << producto->existenciasDeProducto << endl;
    return o;
}