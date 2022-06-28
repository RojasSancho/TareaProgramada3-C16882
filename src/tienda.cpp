#include "tienda.h"
#include <iostream>
#include <fstream>

using namespace std;

Tienda::Tienda(string nombre, string direccionInternet, string direccionFisica, string telefono)
{
    strcpy(this->nombre, nombre.c_str());
    strcpy(this->direccionInternet, direccionInternet.c_str());
    strcpy(this->direccionFisica, direccionFisica.c_str());
    strcpy(this->telefono, telefono.c_str());
}

void Tienda::InsertarProducto(Producto *productoNuevo)
{
    this->productos.push_back(productoNuevo);
}

void Tienda::GuardarEnStreamBinario(ostream *streamSalida)
{
    streamSalida->write(this->nombre, 15);
    streamSalida->write(this->direccionInternet, 24);
    streamSalida->write(this->direccionFisica, 24);
    streamSalida->write(this->telefono, 8);

    for(Producto *producto : this->productos) 
    {
        streamSalida->write((char *)producto, sizeof(Producto));
    }

    
    
}

ostream& operator << (ostream &o, const Tienda *tienda)
{
    o << "INFORMACION DE LA TIENDA" << endl << "Nombre: " << tienda->nombre << endl << "Direccion de Internet: " << tienda->direccionInternet << endl << "Direccion Fisica: " << tienda->direccionFisica << endl << "Telefono: " << tienda->telefono;
    return o;
}