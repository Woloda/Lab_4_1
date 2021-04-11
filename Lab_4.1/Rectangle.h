﻿#pragma once

#include "Figure.h"


//похідний клас "Rectangle"(прямокутник) --- успадковує від класу "Figure"
class Rectangle : public Figure {
private:
	/* поле "b" --- відповідає за одну зі сторін прямокутника
	тобто 2 сторона(1 сторона --- поле "a"(успадковане)) */
	double b;
public:
	Rectangle();					//конструктор за умовчанням(без параметрів)
	Rectangle(double, double);		//конструктор ініціалізації

	void Set_b(double);				//встановлення значення поля "b"
	double Get_b() const;			//отримання значення поля "b"

	virtual double Square();		//віртуальний метод --- відповідає за обчислення площі прямокутника
	virtual double Perimeter();		//віртуальний метод --- відповідає за обчислення периметра прямокутника

	//віртуальний метод --- відповідає за виведення на екран даних прямокутника
	virtual std::ostream& Display(std::ostream& out) const;
};