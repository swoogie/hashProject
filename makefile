main: 
	g++ -O3 main.cpp -o main.exe

compile:
	g++ -c main.cpp -o 

link:
	g++ -o main.exe main.o

del:

	rm *.o *.exe
