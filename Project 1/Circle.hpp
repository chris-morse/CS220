/*  Circle.hpp
	Defines Circle class with members and function prototypes
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#ifndef Circle_hpp
#define Circle_hpp
#include "Shape.hpp"

class Circle : public Shape
{
private:

    int radius;

public:

    /* Circle
	Default constructor for Circle class
	Calls Shape() and sets radius to 1 */
    Circle();

    /* Circle
	overloaded constructor for Circle class
	Calls Shape(x,y) and sets radius to r */
    Circle(int x, int y, int r);

    /* getArea
	Computes the area of the circle
	Returns: Double area of the circle
	*/
	double getArea();

    /* displayStats
	Displays a list of the circle's properties.
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
#endif //Shape.hpp