#include "Angle.h"

void Angle::set_normal_angle(const double degree, const double minute)
{
	if (degree >= MIN_DEGREE&& degree <= MAX_DEGREE&& minute >= MIN_MINUTE&& (degree + minute / D_60) <= MAX_DEGREE)
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
	return degree + minute / D_60;
}
double Angle::get_minute()const
{
	return degree * D_60 + minute;
}
double Angle::get_radian() const
{
	return (degree + minute / D_60) / D_57;
}
double Angle::get_sin()const
{
	return sin(get_radian());
}
bool Angle::operator== (const Angle& other)
{
	if ((this->get_degree()  other.get_degree()) < numeric_limits<double>::epsilon())
	{
		return true;
	}
	return false;
}
bool Angle::operator> (const Angle& other)
{
	if ((this->get_degree() > other.get_degree()))
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
