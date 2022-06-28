#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <iostream>
#include <string.h>
#include "producto.h"

using namespace std;

class Tienda {

    char nombre[15];
    char direccionInternet[24]; 
    char direccionFisica[24];
    char telefono[8];

    vector<Producto *> productos;

    public:
    Tienda(string nombre, string direccionInternet, string direccionFisica, string telefono);
    Tienda();
   

    void InsertarProducto(Producto *productoNuevo);
    void EliminarProducto(int idProducto);
    string ConsultarProductos();

    void GuardarEnStreamBinario(ostream *streamSalida);
    void CargarDesdeStreamBinario(istream *streamEntrada);
    
    friend ostream& operator << (ostream &o, const Tienda *tienda);
};
















#endif