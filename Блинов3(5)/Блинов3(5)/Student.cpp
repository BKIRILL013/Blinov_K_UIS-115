#include "Student.h"

void Student::set_correct_year(const unsigned int year)
{
	if (year <= 5)
	{
		this->year = year;
	}
	else
	{
		throw invalid_argument("Неверный год обучения");
	}
}
void Student::set_year(const unsigned int year)
{
	set_correct_year(year);
}
Student::Student(const unsigned int age, const string& name, const string& sex, const double weight, const unsigned int year)
{
	this->age = age;
	this->name = name;
	this->sex = sex;
	set_correct_weight(weight);
	set_correct_year(year);
}
Student::~Student() {};
ostream& operator<<(ostream& out, Student& stud)
{
	out << "Name: " << stud.get_name() << endl;
	out << "Sex: " << stud.get_sex() << endl;
	out << "Age = " << stud.get_age() << endl;
	out << "Weight = " << stud.get_weight() << endl;
	out << "Year of study: " << stud.get_year() << endl;
	return out;
}
unsigned int Student::get_year()const
{
	return year;
}