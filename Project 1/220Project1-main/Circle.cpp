/*  Circle.cpp
	Implements functions defined in Circle.hpp
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#include "Circle.hpp"


Circle::Circle() : Shape()
{
    radius = 1;
}

Circle::Circle(int x1, int y1, int r): Shape(x1, y1)
{
    radius = r;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

void Circle::displayStats()
{
    using namespace std;
    cout << "----Circle----" << endl << 
            "Center: "; cout << coords << 
            "Radius:  " << radius << endl << 
            "Area:    " << getArea() << endl << 
            "--------------" << endl << endl;
}

bool Circle::doesFit()
{
    if(coords.y + radius > 10 || coords.x + radius > 20 || coords.y - radius < 0 || coords.x - radius < 0)
         throw 5;
    else    
        return true;
}

bool Circle::canFit()
{
    if(radius > 5)
        return false;
    else    
        return true;
}
