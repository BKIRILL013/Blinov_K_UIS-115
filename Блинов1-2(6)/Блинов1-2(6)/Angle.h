#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Angle
{
private:
	double degree;
	double minute;
	/**
	 \brief	Устанавливает верные значения для угла
	 */
	void set_normal_angle(const double degree, const double minute);
	/**
	 \brief	костанта для градусов
	 */
	const double D_60 = 60;
	/**
	 \brief	костанта для перевода в радианы
	 */
	const double D_57 = 57.2958;
	/**
	 \brief	костанта: минимальный градус
	 */
	const double MIN_DEGREE = 0;
		/**
	 \brief	костанта: минимальный градус
	 */
	const double MAX_DEGREE = 360;
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Angle(const double degree, const double minute);
	friend ostream& operator<<(ostream& out, const Angle& angle);
	/**
	 \brief	Деструктор по умолчанию.
	 */
	~Angle() = default;
	/**
	 \brief	Конструктор копирования по умолчанию.
	 */
	Angle(const  Angle&) = default;
	/**
	 \brief	Конструктор присваивания по умолчанию.
	 */
	Angle& operator=(const  Angle&) = default;
	/**
	 \brief	Получает градусы
	 */
	double get_degree()const;
	/**
	 \brief	Получает минуты
	 */
	double get_minute()const;
	/**
	 \brief	Получает радиану
	 */
	double get_radian() const;
	/**
	 \brief	Получает синус угла
	 */
	double get_sin()const;
	/**
	 \brief	Устанавливает новый угол
	 */
	void set_angle(const double degree, const double minute);
	/**
	 \brief	Оператор сравнения равно
	 */
	bool operator== (const Angle& other);
	/**
	 \brief	Оператор сравнения больше
	 */
	bool operator> (const Angle& other);
	/**
	 \brief	Оператор сравнения меньше
	 */
	bool operator< (const Angle& other);
};

