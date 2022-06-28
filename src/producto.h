#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string.h>
using namespace std;

class Producto {

    int id;
    char nombre[20];
    int existenciasDeProducto;
     
    public:
    Producto(int id, string nombre, int existenciasDeProducto);
    
 
};

#endif