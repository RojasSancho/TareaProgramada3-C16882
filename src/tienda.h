#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <iostream>
#include <string>
#include "producto.h"

using namespace std;

class Tienda {

    char nombre[15];
    string direccionInternet;
    string direccionFisica;
    char telefono[8];

    vector<Producto *> productos;

    public:
    Tienda();
    ~Tienda();

    void InsertarProducto(Producto *productoNuevo);
    void EliminarProducto(int idProducto);
    string ConsultarProductos();

    
};
















#endif