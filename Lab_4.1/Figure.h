#pragma once

#include <sstream>


class Figure {		//абстрактний клас(базовий клас) "figure"(фігура)
private:
	double a;	//поле "a" --- відповідає за одну зі сторін прямокутника, трапеції і радіус кола
public:
	Figure();			//конструктор за умовчанням(без параметрів)
	Figure(double);		//конструктор ініціалізації

	void Set_a(double);				//встановлення значення поля "a"
	double Get_a() const;			//отримання значення поля "a"

	virtual double Square() = 0;		//віртуальний метод --- відповідає за обчислення площі фігури
	virtual double Perimeter() = 0;		//віртуальний метод --- відповідає за обчислення периметра фігури

	//віртуальний метод --- відповідає за виведення на екран даних фігури
	virtual std::ostream& Display(std::ostream& out) const = 0;
};