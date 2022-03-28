#include "Point.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> // підключаємо бібліотеку, яка описує літерні потоки

using namespace std;
void Point::Display() const
{
	cout << endl;
	cout << " x = " << x << endl;
	cout << " y = " << y << endl;
}

void Point::Init(double x, double y)
{
	Setx(x);
	Sety(y);
}
void Point::Read()
{
	double x, y;
	cout << "Введіть координати:" << endl;
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	Init(x, y);
}
const char* Point::toString() const
{
	stringstream sout; // створили об'єкт "літерний потік"
	sout << x << " + i * " << y << endl; // направили в літерний потік 
	// виведення даних про об'єкт
	return sout.str().c_str(); // str() перетворює літерний потік
	// до літерного рядка
}

double Point::GetLength(Point first, Point second) const {
	double x1 = first.Getx();
	double x2 = second.Getx();
	double y1 = first.Gety();
	double y2 = second.Gety();
	
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}