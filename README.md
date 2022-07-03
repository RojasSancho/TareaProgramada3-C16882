# TareaProgramada3-C16882

Esta biblioteca permite crear una tienda con su debido nombre, direccion de internet y fisica ademas de su telefono. Por otra parte es posible anadir diferentes productos a esta tienda, los cuales tienen su id, nombre y el numero de existencias en ese momento. Es posible guardar la informacion de la tienda y sus productos en un archivo binario o al contrario cargar toda su informacion desde un archivo binario para asi tenerla en memoria.

Estructura de la informacion general de la tienda (en archivo binario):

| Campo              | Tamaño en bytes | Offset |
| ----------         | --------------- | ------ | 
| nombre             | 15              | 0  |
| direccion internet | 24              | 15 |
| direccion fisica   | 24              | 39 |
| telefono           | 8               | 63 |

Estructura de cada producto (en archivo binario):

| Campo              | Tamaño en bytes | Offset |
| ----------         | --------------- | ------ | 
| id                 | 4               | 0  |
| nombre             | 20              | 4  |
| existencias        | 4               | 24 |

INSTRUCCIONES PARA COMPILAR:

Usar comando: make

UTILIZAR CODIGO:

Esto creara un .so y tambien creara una carpeta llamada include en la cual estaran los .h de producto y tienda, necesarios para tener una referencia en el programa cliente hacia el codigo de la biblioteca. Ademas con los .h se podran ver los metodos que se tienen disponibles de cada clase.