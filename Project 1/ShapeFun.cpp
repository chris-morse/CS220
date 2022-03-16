/*
	ShapeFun.cpp
	Driver for ShapeFun program. Main function Gets user input on shape type
	doShape function checks if the shape fits and displays the shape's stats.
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22

	Project 1 		by				March 3	
	Shape Fun		Chris Morse		2022
*/  
#include "Circle.hpp"
#include "Square.hpp"

void doShape(Shape &myShape);

int main()
{
	using namespace std;

	cout << "Welcome to Project 1: Shape Fun." 							<< endl << 
			"Would you like to create a circle, rectangle, or square? " << endl;
	string shapeName;
	cin >> shapeName;

	//Depending on the name inputted, the program creates a new Shape of the specified 
	// Class type (circle, rectangle, or square). Then it runs the doShape function.
	
	int x, y, l, w;
	if(shapeName == "circle" || shapeName == "Circle")
	{
		cout << "Please input the center coordinates of your circle." << endl << "X coord: " ; cin >> x;
		cout << "Y coord: "; cin >> y;
		cout << "Input the radius of your circle: "; cin >> l;
		Circle myShape(x,y,l);
		doShape(myShape);
	}
	else if(shapeName == "rectangle" || shapeName == "Rectangle") 
	{
		cout << "Please input the center coordinates of your rectangle." << endl << "X coord: " ; cin >> x;
		cout << "Y coord: "; cin >> y;
		cout << "Input the length of your rectangle: "; cin >> l;
		cout << "Input the width of your rectangle: "; cin >> w;
		Rectangle myShape(x,y,l,w);
		doShape(myShape);
	}
	else if(shapeName == "square" || shapeName == "Square") 
	{
		cout << "Please input the center coordinates of your square." << endl << "X coord: " ; cin >> x;
		cout << "Y coord: "; cin >> y;
		cout << "Input the length of your square: "; cin >> l;
		Square myShape(x,y,l);
		doShape(myShape);
	}
}

	//doShape checks if the shape fits into the grid, if it doesn't an error is thrown,
	// which is caught and the shape is now checked to see if it can possibly fit into the grid,
	// in which case it is moved to the center. Finally, the program displays the properties of the shape

void doShape(Shape &myShape)
{	
	using namespace std;
	cout << endl;
	
	try{

		if (myShape.doesFit())
		{
			cout << "Your shape fits inside of the (20,10) coordinate plane. " << endl << endl;
			myShape.displayStats();
		}
	}
	catch(int num)
	{
			cout << "Error: Your shape does not fit inside of the 20x10 grid. \n";
			if(myShape.canFit())
			{
				cout << "Luckily, we moved your shape's center to (10,5) so it fits inside of the plane." << endl << endl;
				myShape.moveCenter(10,5);
				myShape.displayStats();
			}
	}
}