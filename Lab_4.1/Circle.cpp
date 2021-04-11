#include "Circle.h"


Circle::Circle(): Figure() {}					//конструктор за умовчанням(без параметрів)
Circle::Circle(double value): Figure(value) {}	//конструктор ініціалізації

double Circle::Square() {			//віртуальний метод --- відповідає за обчислення площі кола
	const double Pi = atan(1) * 4;
	return Pi * Get_a() * Get_a();
}

double Circle::Perimeter() {		//віртуальний метод --- відповідає за обчислення периметра кола
	const double Pi = atan(1) * 4;
	return 2 * Pi * Get_a();
}

//віртуальний метод --- відповідає за виведення на екран даних кола
std::ostream& Circle::Display(std::ostream& out) const {
	out << "\nThe radius is: " << Get_a();
	return out;
}