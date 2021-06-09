#pragma once
#include "Geometric_figures.h"
class Trapezoid :public Geometric_figures
{
private:
	double a, b, c, d;
	/**
	 \brief Устанавливает стороны
	 */
	void set_sides(const double a, const double b, const double c, const double d);
public:
	/**
	 \brief Конструктор с параметрами
	 */
	explicit Trapezoid(const double a, const double b, const double c, const double d);
	/**
	 \brief Оператор сдвига
	 */
	friend ostream& operator<< (ostream& out, Trapezoid& trap);
	/**
	 \brief Виртуальный деструктор
	 */
	virtual ~Trapezoid();
	/**
	 \brief Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief Получает площадь
	 */
	double get_area() override;
};

