/*  Square.cpp
	Implements functions defined in Square.hpp
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#include "Square.hpp"


Square::Square() : Rectangle()
{}

Square::Square(int x, int y, int l) : Rectangle(x, y, l, l)
{}

void Square::displayStats()
{
    using namespace std;
    cout << "----Square----" << endl << 
            "Center: "; cout << coords << 
            "Length:  " << length << endl << 
            "Width:   " << width << endl <<
            "Area:    " << getArea() << endl << 
            "Perimeter: " << getPerimeter() << endl <<
            "--------------" << endl << endl;
}