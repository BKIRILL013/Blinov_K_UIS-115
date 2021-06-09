#pragma once
#include "Geometric_figures.h"
class Ellipse :public Geometric_figures
{
private:
	double a, b;
	/**
	 \brief	Устанавливает правильные полуоси
	 */
	void set_semi_axis(const double a, const double b);
public:
	/**
	 \brief Конструктор с параметрами
	 */
	explicit Ellipse(const double a, const double b);
	/**
	 \brief Оператор сдвига
	 */
	friend ostream& operator<< (ostream& out, Ellipse& el);
	/**
	 \brief Виртуальный деструктор
	 */
	virtual ~Ellipse() {};
	/**
	 \brief Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief Получает площадь
	 */
	double get_area() override;
};

