#pragma once

#include "Figure.h"


class Trapeze: public Figure {	//похідний клас "Trapeze"(трапеція) --- успадковує від класу "Figure"
private:
	/* поле "b", "c", "d" --- відповідає за сторони трапеції
	тобто 2, 3, 4 сторона(1 сторона --- поле "a"(успадковане)) */
	double b, c, d;		//
public:
	Trapeze();										//конструктор за умовчанням(без параметрів)
	Trapeze(double, double, double, double);		//конструктор ініціалізації

	void Set_b(double);		//встановлення значення поля "b"
	void Set_c(double);		//встановлення значення поля "c"
	void Set_d(double);		//встановлення значення поля "d"

	double Get_b() const;			//отримання значення поля "b"
	double Get_c() const;			//отримання значення поля "c"
	double Get_d() const;			//отримання значення поля "d"

	virtual double Square();		//віртуальний метод --- відповідає за обчислення площі трапеції
	virtual double Perimeter();		//віртуальний метод --- відповідає за обчислення периметра трапеції

	//віртуальний метод --- відповідає за виведення на екран даних трапеції
	virtual std::ostream& Display(std::ostream& out) const;

};