/*  Rectangle.cpp
	Implements functions defined in Rectangle.hpp
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  

#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape()
{
    length = 1;
    width = 1;
}

Rectangle::Rectangle(int x1, int y1, int l, int w): Shape(x1, y1)
{
    length = l;
    width = w;
}

double Rectangle::getArea()
{
    return length * width;
}

int Rectangle::getPerimeter()
{
    return 2 * (length + width);
}

void Rectangle::displayStats()
{
    using namespace std;
    cout << "----Rectangle----" << endl << 
            "Center: "; cout << coords << 
            "Length:  " << length << endl << 
            "Width:   " << width << endl <<
            "Area:    " << getArea() << endl << 
            "Perimeter: " << getPerimeter() << endl <<
            "-----------------" << endl << endl;
}

bool Rectangle::doesFit()
{
   if(coords.y + (double)length/2 > 10 || coords.x + (double)width/2 > 20 || coords.y - (double)length/2 < 0 || coords.x - (double)length/2 < 0)
         throw 5;
    else    
        return true;
}

bool Rectangle::canFit()
{
    if(width > 20 || length > 10)
        return false;
    else    
        return true;
}