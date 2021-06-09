#include "Square.h"

void Square::set_sides(const double a)
{
	if (a > 0)
	{
		this->a = a;
	}
	else
	{
		throw invalid_argument{ "Неверные стороны" };
	}
}
Square::Square(const double a)
{
	set_sides(a);
}
Square::~Square() {};
ostream& operator<< (ostream& out, Square& sq)
{
	out << "Square \n" << "Perimeter = " << sq.get_perimeter() << endl;
	out << "Area = " << sq.get_area() << endl;
	return out;
}
double Square::get_perimeter()
{
	return a * 4.0;
}
double Square::get_area()
{
	return pow(a, 2);
}
