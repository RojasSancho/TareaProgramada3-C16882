FLAGS = -g -c --std=c++17

all:
		mkdir -p bin
		g++ $(FLAGS) src/main.cpp -o bin/main.o
		g++ $(FLAGS) src/producto.cpp -o bin/producto.o
		g++ $(FLAGS) src/tienda.cpp -o bin/tienda.o
		g++ -o bin/tienda bin/main.o bin/producto.o  bin/tienda.o
		
test:
		mkdir -p obj
		mkdir -p bin
		g++ $(FLAGS) src/producto.cpp -o obj/producto.o
		g++ $(FLAGS) src/tienda.cpp -o obj/tienda.o
		g++ $(FLAGS) tests/tienda_test.cpp -o obj/tienda_test.o
		g++ $(FLAGS) tests/producto_test.cpp -o obj/producto_test.o
		g++ -g -o bin/tests obj/producto.o obj/tienda.o obj/tienda_test.o obj/producto_test.o -lgtest -lgtest_main -lpthread

clean:
		rm -Rf bin
		rm *.dat