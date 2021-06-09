#pragma once
#include<iostream>
#include <string>
using namespace std;
class Man
{
protected:
	unsigned int age;
	string name;
	string sex;
	double weight;
	/**
	 \brief	Устанавливает верный возраст
	 */
	void set_correct_weight(const double weight);
public:
	/**
	 \brief	Конструктор по умолчанию
	 */
	Man() 
	{
		age = 0;
		name = "";
		sex = "";
		weight = 0;
	}
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Man(const unsigned int age, const string& name, const string& sex, const double weight);
	/**
	 \brief	Деструктор
	 */
	~Man();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, Man& man);
	/**
	 \brief	Устанавливает имя
	 */
	void set_name(const string& name);
	/**
	 \brief	Устанавливает возраст
	 */
	void set_age(const unsigned int age);
	/**
	 \brief	Устанавливает вес
	 */
	void set_weight(const double weight);
	/**
	 \brief	Получает имя
	 */
	string get_name()const;
	/**
	 \brief	Получает пол
	 */
	string get_sex()const;
	/**
	 \brief	Получает возраст
	 */
	unsigned int get_age()const;
	/**
	 \brief	Получает вес
	 */
	double get_weight()const;
};