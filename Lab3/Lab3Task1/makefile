# This makefile will compile Task1 of Lab3 for COSC-220 Spring 2023

all: Circle.o Task1_main.o
	g++ -o Task1 Task1_main.o Circle.o

Circle.o: Circle.cpp
	g++ -c Circle.cpp

Task1_main.o: Task1_main.cpp
	g++ -c Task1_main.cpp

Clean:
	rm *.o Task1
