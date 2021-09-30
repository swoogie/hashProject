main: 
	g++ main.cpp read.cpp hashing.cpp rng.cpp sha1.cpp sha256.cpp md5.cpp timer.cpp rnd.cpp -o main.exe

compile:
	g++ -c main.cpp read.cpp hashing.cpp rng.cpp -o 

link:
	g++ -o main.exe main.o read.o

del:

	rm *.o *.exe
