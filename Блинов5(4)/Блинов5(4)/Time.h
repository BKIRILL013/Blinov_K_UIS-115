#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "Independent_class.h"
#include "Successor_class.h"

/**
* \brief Функция считающая количество секунд
*/
int Time(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, спецификатор throw()
*/
int Time2(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, с конкретной спецификацией с подходящим стандартным исключением
*/
int Time3(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд, исключение как пустой класс
*/
int Time4(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд исключение как независимый класс с полями-параметрами функции
*/
int Time5(const int hour, const int minutes);
/**
* \brief Функция считающая количество секунд исключение как наследник от стандартного исключени¤ с полями
*/
int Time6(const int hour, const int minutes);