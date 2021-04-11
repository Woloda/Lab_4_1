#include "figure.h"


Figure::Figure() : a(0) {}					//конструктор за умовчанням(без параметрів)
Figure::Figure(double value) : a(value) {}	//конструктор ініціалізації

void Figure::Set_a(double value) { a = value; }		//встановлення значення поля "a"
double Figure::Get_a() const { return a; }				//отримання значення поля "a"