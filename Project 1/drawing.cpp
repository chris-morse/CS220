#include <iostream>
using namespace std;

int main()
{

	int coords[10][20];
	int length = 5;
	int width = 6;
	int centerX = 5;
	int centerY = 6;

	int x = centerX - width/2 ;
	int y = centerY - length/2 ;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			coords[i][j] = 0;
		}
	}

	for (int i = x; i < x+length; i++)
	{
		for (int j = y; j < y+width; j++)
		{
			coords[i][j] = 1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << coords[i][j] << " ";
		}
		cout << endl;
	}




		for (int i = 10; i > 0; i--)
		{	
				if(i < 10)
				cout << i << " ";
				else
				cout << i;
				for (int j = 0; j < 20; j++)
				{	
					if(coords[i][j] == 0)
					{
					if (j == 0)
					cout << "  ";
					else
					cout << "   ";
					}
					else if(coords[i][j] == 1)
					{
					if (j == 0)
					cout << " *";
					else
					cout << "  *";
					}



				}
				cout << endl;	
		}
		cout << "   ";
		for (int i = 1; i <= 20; i++)
		{
			if(i < 9)
				cout << i << "  ";
				else
				cout << i << " ";
		}
		

		


}