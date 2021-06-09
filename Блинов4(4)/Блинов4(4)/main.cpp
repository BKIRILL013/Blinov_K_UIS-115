#include "Ellipse.h"
#include "Square.h"
#include "Trapezoid.h"

int main()
{
	Ellipse el(3, 4);
	cout << el << endl;
	Trapezoid tr(3, 5, 7, 7);
	cout << tr << endl;
	Square sq(4);
	cout << sq <<endl;
}