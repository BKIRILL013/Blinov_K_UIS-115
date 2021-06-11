#include "Man.h"

void Man::set_correct_weight(const double weight)
{
	if (weight > 0)
	{
		this->weight = weight;
	}
	else
	{
		throw invalid_argument("Вес должен быть бошльше нуля");
	}
}
void Man::set_name(const string& name)
{
	this->name = name;
}
void Man::set_age(const unsigned int age)
{
	this->age = age;
}
void Man::set_weight(const double weight)
{
	set_correct_weight(weight);
}
Man::Man(const unsigned int age, const string& name, const string& sex, const double weight)
{
	this->age = age;
	this->name = name;
	this->sex = sex;
	set_correct_weight(weight);
}
Man::~Man() {};
string Man::get_name()const
{
	return name;
}
string Man::get_sex()const
{
	return sex;
}
unsigned int Man::get_age()const
{
	return age;
}
double Man::get_weight()const
{
	return weight;
}
ostream& operator<<(ostream& out, Man& man)
{
	out << "Name: " << man.get_name() << endl;
	out << "Sex: " << man.get_sex() << endl;
	out << "Age = " << man.get_age() << endl;
	out << "Weight = " << man.get_weight() << endl;
	return out;
}