#pragma once
#include "Man.h"
class Student :public Man
{
private:
	unsigned int year;
	/**
	 \brief	Устанавливает верные года обучения
	 */
	void set_correct_year(const unsigned int year);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Student(const unsigned int age, const string& name, const string& sex, const double weight, const unsigned int year);
	/**
	 \brief	Деструктор
	 */
	~Student();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Student& stud);
	/**
	 \brief	Устанавливает года обучения
	 */
	void set_year(const unsigned int year);
	/**
	 \brief	Получает года обучения
	 */
	unsigned int get_year()const;
};

