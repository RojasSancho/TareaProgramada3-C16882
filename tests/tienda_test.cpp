#include <gtest/gtest.h>
#include "../src/tienda.h"
#include <string.h>
#include <fstream>
#include <sstream>



namespace
{

    
    TEST(Tienda_Test, Escribir) {
        /// AAA

        // Arrange - configurar el escenario
        Tienda *tiendaEsperada = new Tienda("PC Rojas", "computadorasrojas.com", "Guadalupe San Jose", "60874354");

        
        
        Producto *producto1 = new Producto(1, "Computadoras", 13);
        tiendaEsperada->InsertarProducto(producto1);

        // Act - ejecute la operación
        // Escribir un archivo de prueba
        ofstream archivoSalida;
        archivoSalida.open("archivo_test.dat", ios::out|ios::binary);

        if (!archivoSalida.is_open())
        {
            cerr << "No se pudo abrir archivo archivo_test.dat para escribir los datos";
            FAIL();
        }

        tiendaEsperada->GuardarEnStreamBinario(&archivoSalida);

        archivoSalida.close();

        // Leer el archivo de prueba
        ifstream archivoEntrada;
        archivoEntrada.open("archivo_test.dat", ios::in|ios::binary);

        if (!archivoEntrada.is_open())
        {
            cerr << "No se pudo abrir archivo archivo_test.dat para leer los datos";
            FAIL();
        }
    
        Tienda *tiendaLeida = new Tienda();
        tiendaLeida->CargarDesdeStreamBinario(&archivoEntrada);

        ostringstream streamSalidaTiendaLeida;
        streamSalidaTiendaLeida << tiendaLeida;

        ostringstream streamSalidaTiendaEsperada;
        streamSalidaTiendaEsperada << tiendaEsperada;

        delete tiendaLeida;
        delete tiendaEsperada;

        string esperado = "INFORMACION DE LA TIENDA\nNombre: PC Rojas\nDireccion de Internet: computadorasrojas.com\nDireccion Fisica: Guadalupe San Jose\nTelefono: 60874354\n\nPRODUCTOS DE LA TIENDA\n[1] - Computadoras - Existencias: 13\n"; 
        
        //Se valida que la salida de la tienda esperada sea correcta
        string salidaTiendaEsperada = streamSalidaTiendaEsperada.str();
        EXPECT_EQ(esperado, salidaTiendaEsperada);

        //Validar la salida de tienda leida sea igual a lo esperado
        string salidaTiendaLeidaDeArchivo = streamSalidaTiendaLeida.str();
        EXPECT_EQ(esperado, salidaTiendaLeidaDeArchivo);
    }
}
