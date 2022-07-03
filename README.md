# TareaProgramada3-C16882

Esta biblioteca permite crear una tienda con su debido nombre, direccion de internet y fisica ademas de su telefono. Por otra parte es posible anadir diferentes productos a esta tienda, los cuales tienen su id, nombre y el numero de existencias en ese momento. Es posible guardar la informacion de la tienda y sus productos en un archivo binario o al contrario cargar toda su informacion desde un archivo binario para asi tenerla en memoria.

Estructura de la informacion general de la tienda (en archivo binario):

| Campo              | Tamaño en bytes | Offset |
| ----------         | --------------- | ------ | 
| nombre             | 15              | 0  |
| direccion internet | 24              | 15 |
| direccion fisica   | 24              | 39 |
| telefono           | 8               | 63 |

