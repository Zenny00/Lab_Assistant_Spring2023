# This makefile will compile Task2 of Lab3 for COSC-220 Spring 2023

all: Coin.o Task2_main.o
	g++ -o Task2 Task2_main.o Coin.o

Coin.o: Coin.cpp
	g++ -c Coin.cpp

Task2_main.o: Task2_main.cpp
	g++ -c Task2_main.cpp

Clean:
	rm *.o Task2
