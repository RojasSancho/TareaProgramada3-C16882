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
            
        //Assert
        EXPECT_EQ(esperado, actual);
    }

}