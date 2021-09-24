main: 
	g++ -O3 main.cpp read.cpp hashing.cpp rng.cpp -o main.exe

compile:
	g++ -c main.cpp read.cpp hashing.cpp rng.cpp -o 

link:
	g++ -o main.exe main.o read.o

del:

	rm *.o *.exe
