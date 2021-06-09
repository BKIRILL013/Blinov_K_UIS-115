#include "Trapezoid.h"

void Trapezoid::set_sides(const double a, const double b, const double c, const double d)
{
	if (a > 0 && b > 0 && c > 0 && d > 0)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	else
	{
		throw invalid_argument{ "Неверные стороны" };
	}
}
Trapezoid::Trapezoid(const double a, const double b, const double c, const double d)
{
	set_sides(a, b, c, d);
}
Trapezoid::~Trapezoid() {};
ostream& operator<< (ostream& out, Trapezoid& trap)
{
	{
		out << "Trapezoid \n" << "Perimeter = " << trap.get_perimeter() << endl;
		out << "Area = " << trap.get_area() << endl;
		return out;
	}
}
double Trapezoid::get_perimeter()
{
	return a + b + c + d;
}
double Trapezoid::get_area()
{
	double h = sqrt(pow(c, 2) - pow((pow(a - b, 2) + pow(c, 2) - pow(d, 2)) / (2.0 * (a - b)), 2));
	return 0.5 * h * (a + b);
}
