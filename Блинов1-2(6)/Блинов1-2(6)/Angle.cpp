#include "Angle.h"

void Angle::set_normal_angle(const double degree, const double minute)
{
	if (degree >= 0 && degree <= 360 && minute >= 0 && (degree + minute / 60.0) <= 360)
	{
		this->degree = degree;
		this->minute = minute;
	}
	else
	{
		throw invalid_argument("Неверные углы");
	}
}
void Angle::set_angle(const double degree, const double minute)
{
	set_normal_angle(degree, minute);
}
Angle::Angle(const double degree, const double minute)
{
	set_normal_angle(degree, minute);
}
ostream& operator<<(ostream& out, const Angle& angle)
{
	out << "Degree = " << angle.get_degree() << endl;
	out << "Minutes = " << angle.get_minute() << endl;
	out << "Sinus = " << angle.get_sin() << endl;
	out << "Radian = " << angle.get_radian() << endl;
	return out;
}
double Angle::get_degree()const
{
	return degree + minute / 60.0;
}
double Angle::get_minute()const
{
	return degree * 60.0 + minute;
}
double Angle::get_radian() const
{
	return (degree + minute / 60.0) / 57.3;
}
double Angle::get_sin()const
{
	return sin(get_radian());
}
bool Angle::operator== (const Angle& other)
{
	if (this->get_degree() == other.get_degree())
	{
		return true;
	}
	return false;
}
bool Angle::operator> (const Angle& other)
{
	if (this->get_degree() > other.get_degree())
	{
		return true;
	}
	return false;
}
bool Angle::operator< (const Angle& other)
{
	if (this->get_degree() < other.get_degree())
	{
		return true;
	}
	return false;
}