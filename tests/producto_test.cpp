#include <gtest/gtest.h>
#include "../src/producto.h"
#include <cstring>
#include <fstream>
#include <sstream>



namespace
{  
    TEST(Producto_Test, StreamSalida_Test) {
        ///AAA

        //Arrange
        Producto *producto = new Producto(500, "Camisa", 57);

        // Act
        ostringstream streamSalida;
        streamSalida << producto;

        string actual = streamSalida.str();
        string esperado = "[500] - Camisa - Existencias: 57\n";
            
        delete producto;
        //Assert
        EXPECT_EQ(esperado, actual);
    }

    TEST(Producto_Test, Cambiar_Nombre_Test) {
        ///AAA

        //Arrange
        Producto *producto = new Producto(74, "Memoria", 57);

        // Act
        producto->CambiarNombre("Disipador");
        string actual = producto->ConsultarNombre();
        string esperado = "Disipador";

        delete producto;
        //Assert
        EXPECT_EQ(esperado, actual);
    }

    TEST(Producto_Test, Cambiar_Numero_De_Existencias_Test) {
        ///AAA

        //Arrange
        Producto *producto = new Producto(74, "Memoria", 57);

        // Act
        producto->CambiarNumeroDeExistencias(150);
        int actual = producto->ConsultarNumeroDeExistencias();
        int  esperado = 150;

        delete producto;
        //Assert
        EXPECT_EQ(esperado, actual);
    }

}