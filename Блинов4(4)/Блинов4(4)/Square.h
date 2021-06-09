#pragma once
#include "Geometric_figures.h"
class Square :public Geometric_figures
{
private:
	double a;
	/**
	 \brief Устанавливает стороны
	 */
	void set_sides(const double a);
public:
	/**
	 \brief Конструктор с параметрами
	 */
	explicit Square(const double a);
	/**
	 \brief Оператор сдвига
	 */
	friend ostream& operator<< (ostream& out, Square& sq);
	/**
	 \brief Виртуальный деструктор
	 */
	virtual ~Square();
	/**
	 \brief Получает периметр
	 */
	double get_perimeter()override;
	/**
	 \brief Получает площадь
	 */
	double get_area() override;
};

