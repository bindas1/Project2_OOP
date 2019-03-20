all: proj2

proj2: main.o list.o punkt.o
	g++ main.o list.o punkt.o -o proj2

main.o: main.cpp
	g++ -std=c++11 -c -Wall -pedantic main.cpp

punkt.o: punkt.cpp
	g++ -std=c++11 -c -Wall -pedantic punkt.cpp

list.o: list.cpp
	g++ -std=c++11 -c -Wall -pedantic list.cpp

clean:
	rm -rf *o proj2
	
debug:
	g++ -g punkt.cpp list.cpp main.cpp -o debug.o
