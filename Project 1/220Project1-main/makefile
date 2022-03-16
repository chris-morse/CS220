# makefile
# Project 1
# Created by Chris Morse on 3/3/22

all: shapeFun

shapeFun: ShapeFun.o Shape.o Center.o Rectangle.o Square.o Circle.o
	g++ -o shapeFun ShapeFun.o Center.o Shape.o Rectangle.o Square.o Circle.o

ShapeFun.o: ShapeFun.cpp Circle.hpp Rectangle.hpp Square.hpp Shape.hpp Center.hpp
	g++ -c ShapeFun.cpp

Center.o: Center.cpp Center.hpp
	g++ -c Center.cpp

Shape.o: Shape.cpp Shape.hpp Center.hpp
	g++ -c Shape.cpp

Rectangle.o: Rectangle.cpp Rectangle.hpp Shape.hpp Center.hpp
	g++ -c Rectangle.cpp

Square.o: Square.cpp Square.hpp Rectangle.hpp Shape.hpp Center.hpp 
	g++ -c Square.cpp

Circle.o: Circle.cpp Circle.hpp Shape.hpp Center.hpp
	g++ -c Circle.cpp

clean:
	rm shapeFun ShapeFun.o Shape.o Center.o Rectangle.o Square.o Circle.o