FLAGS = -g -c --std=c++17

all:
		mkdir -p bin
		g++ $(FLAGS) src/main.cpp -o bin/main.o
		g++ $(FLAGS) src/producto.cpp -o bin/producto.o
		g++ $(FLAGS) src/tienda.cpp -o bin/tienda.o
		g++ -o bin/tienda bin/main.o bin/producto.o  bin/tienda.o
		
