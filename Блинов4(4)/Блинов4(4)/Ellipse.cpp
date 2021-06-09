#include "Ellipse.h"
void Ellipse::set_semi_axis(const double a, const double b)
{
	if (a > 0 && b > 0)
	{
		this->a = a;
		this->b = b;
	}
	else
	{
		throw invalid_argument{ "Неверные полуоси" };
	}
}
Ellipse::Ellipse(const double a, const double b)
{
	set_semi_axis(a, b);
}
ostream& operator<< (ostream& out, Ellipse& el)
{
	out << "Ellipse \n" << "Perimeter = " << el.get_perimeter() << endl;
	out << "Area = " << el.get_area() << endl;
	return out;
}
double Ellipse::get_perimeter()
{
	return 2.0 * PI * sqrt((pow(a, 2) + pow(b, 2)) / 2.0);
}
double Ellipse::get_area()
{
	return PI * a * b;
}