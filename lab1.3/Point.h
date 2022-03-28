#pragma once
class Point
{
private:
	double x, y;
public:
	double Getx() const { return x; }
	double Gety() const { return y; }
	void Setx(double value) { x = value; }
	void Sety(double value) { y = value; }

	void Init(double, double);
	void Read();
	void Display() const;
	const char* toString() const;

	double GetLength(Point,Point) const;

};	

