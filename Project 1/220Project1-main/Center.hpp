/*  Center.hpp
	Declares Center class with members and function prototypes
	Chris Morse
	Created: 3/3/22
	Current: 3/8/22
*/  
#ifndef Center_hpp
#define Center_hpp
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Center
{


public:
	int x, y;

	/* Center
	Default constructor for Center class
	Sets x and y coords to 0 */
	Center();

	/* Center
	Overloaded constructor for Center class
	Sets x and y coords to x1 and y1 */
	Center(int x1, int y1);
	
	
	/* operator<<
	Overloads the output operator for Center objects.
	Parameters: output stream and the center
	Returns: A stream of output that prints to the screen */
	friend ostream& operator<<(ostream& ostr, const Center& c);

};

#endif // Center.hpp