/*  Square.hpp
	Defines class Square with members and function prototypes
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#ifndef Square_hpp
#define Square_hpp
#include "Rectangle.hpp"

class Square : public Rectangle
{
private:
    int side;

public:

	/* Square
	Default constructor for Square class
	Calls Rectangle() and sets side to 1 */
    Square();

	 /* Square
	Overloaded constructor for Square class
	Calls Rectangle(x,y,l,l) which will set the side to l and center to x,y*/
    Square(int x, int y, int l);

	/* displayStats
	Displays a list of the square's properties.
	*/
    void displayStats();
};

#endif // Square.hpp
