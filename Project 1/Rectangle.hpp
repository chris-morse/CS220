/*  Rectangle.hpp
	Declares class Rectangle with members and function prototypes
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "Shape.hpp"

class Rectangle : public Shape
{
protected:
    int length;
    int width;
    
public:


    /* Rectangle
	Default constructor for Rectangle class
	Calls Shape() and sets length and width to 1 */
    Rectangle();


    /* Rectangle
	Overloaded constructor for Rectangle class
	Calls Shape() and sets length and width to l and w */
    Rectangle(int x, int y, int l, int w);
    
    /* getArea
	Computes the area of the rectangle
	Returns: Double area of the rectangle
	*/
	double getArea();

     /* getPerimeter
	Computes the perimeter of the rectangle
	Returns: Double perimeter of the rectangle
	*/
    int getPerimeter();

     /* displayStats
	Displays a list of the rectangle's properties.
	*/
    void displayStats();

    /* doesFit
	Checks to see if the shape currently fits inside the grid.
	Returns: bool true/false that tells you if the shape does currently fit
	*/
	bool doesFit();

    /* canFit
	Checks to see if the shape can potentially fit inside the grid.
	Returns: bool true/false that tells you if the shape could fit
	*/
    bool canFit();
};

#endif // Rectangle.hpp