/*  Center.cpp
	Implements the functions defined in Center.hpp
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#include "Center.hpp"


Center::Center()
{
	x = 0;
	y = 0;
}

Center::Center(int x1, int y1)
{
	x = x1; 
	y = y1;
}

using namespace std;

ostream& operator<<(ostream& ostr, const Center& c){
	
	ostr << "(" << c.x << "," << c.y << ")" << endl;
	return ostr;	
}