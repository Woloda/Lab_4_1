#include "Rectangle.h"


Rectangle::Rectangle() : Figure(), b(0) {}								//конструктор за умовчанням(без параметрів)
Rectangle::Rectangle(double v_a, double v_b): Figure(v_a), b(v_b) {};	//конструктор ініціалізації

void Rectangle::Set_b(double value) { b = value; }	//встановлення значення поля "b"
double Rectangle::Get_b() const { return b; }		//отримання значення поля "b"

//віртуальний метод --- відповідає за обчислення площі прямокутника
double Rectangle::Square() { return Get_a() * b; }	

//віртуальний метод --- відповідає за обчислення периметра прямокутника
double Rectangle::Perimeter() { return 2 * (Get_a() + b); }

//віртуальний метод --- відповідає за виведення на екран даних прямокутника
std::ostream& Rectangle::Display(std::ostream& out) const {
	out << "\nThe first side is: " << Get_a();
	out << "\nThe second side is: " << b;
	return out;
}