/*  Shape.cpp
	Implements functions defined in Shape.hpp
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#include "Shape.hpp"


Shape::Shape(){
	
	coords = Center();
}

Shape::Shape(int x1, int y1){
	
	coords = Center(x1, y1);
}

void Shape::moveCenter(int x, int y){

	coords = Center(x, y);

}

void Shape::displayStats()
{
	using namespace std;
	cout << "--Shape--" << endl << "Center: ";
	cout << coords;

}