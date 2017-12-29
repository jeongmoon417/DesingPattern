singleton.exe : singletonMulFile.o singletonUser.o
	g++ -o singleton.exe singletonMulFile.o singletonUser.o

singletonMulFile.o : singletonMulFile.h singletonMulFile.cpp
	g++ -c -o singletonMulFile.o singletonMulFile.cpp

singletonUser.o : singletonUser.cpp
	g++ -o singletonUser.o singletonUser.cpp
