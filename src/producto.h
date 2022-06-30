#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <cstring>
using namespace std;

class Producto {

    int id;
    char nombre[20]{}; 
    int existenciasDeProducto;
     
    public:
    Producto(int id, string nombre, int existenciasDeProducto);
    Producto();
    
    void CambiarNombre(string nuevoNombre);
    void CambiarNumeroDeExistencias(int nuevasExistencias);
    int ConsultarID();

    friend ostream& operator << (ostream &o, const Producto *producto);
    
};

#endif