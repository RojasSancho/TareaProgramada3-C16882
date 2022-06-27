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

void Tienda::GuardarEnStreamBinario()
{
    ofstream *archivoSalida;
    archivoSalida->open("tienda.dat", ios::out|ios::binary);

    if (!archivoSalida->is_open())
    {  
        cerr << "No fue posible abrir el archivo tienda.dat para guardar los datos";
    }

    char *tienda[71];



    archivoSalida->write((char *)pthread_self, sizeof(Tienda));

    for(Producto *producto : this->productos)
    {
        archivoSalida->write((char *)producto, sizeof(Producto));
    }
}