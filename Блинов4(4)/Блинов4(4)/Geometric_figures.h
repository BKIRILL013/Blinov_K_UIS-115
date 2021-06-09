#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Geometric_figures
{
protected:
	const double PI = 3.14159;
public:
	/**
	 \brief	¬иртуальный геттер периметра
	 */
	virtual double get_perimeter() = 0;
	/**
	 \brief	¬иртуальный геттер площади
	 */
	virtual double get_area() = 0;
	/**
	 \brief	¬иртуальный деструктор
	 */
	virtual ~Geometric_figures() = 0;
};
