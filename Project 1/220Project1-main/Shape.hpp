/*  Shape.hpp
	Defines class Shape with members and function prototypes
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#ifndef Shape_hpp
#define Shape_hpp
#include "Center.hpp"

class Shape
{
protected:

	Center coords;

public:
	/* Shape()
	Default constructor for Shape class
	Calls default constructor for the Shape's coordinates
	*/
	Shape();

	/* Shape
	Overloaded constructor for Shape class
	Calls Center(x,y) to set the Shape's coordinates 
	Parameter: x and y are coordinates of Shape's center.
	*/
	Shape(int x, int y);

	/* moveCenter
	Changes the coordinates of Shape to x and y.
	Parameters: x and y are new coordinates of Shape's center.
	*/
	void moveCenter(int x, int y);
	
	/* displayStats
	Virtual function that displays a list of the shape's properties.
	Different output based on the Shape class type.
	*/
	virtual void displayStats();

	/* getArea
	Virtual function that computes the area of the shape based on shape type.
	Returns: Double area of the shape
	*/
	virtual double getArea() = 0;

	/* doesFit
	Checks to see if the shape currently fits inside the grid.
	Returns: bool true/false that tells you if the shape does currently fit
	*/
	virtual bool doesFit() = 0;

	/* canFit
	Checks to see if the shape can potentially fit inside the grid.
	Returns: bool true/false that tells you if the shape could fit
	*/
	virtual bool canFit() = 0;

};

#endif // Shape_hpp