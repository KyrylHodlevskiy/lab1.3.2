#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	Point a,b,c;
	a.Read();
	a.Display();
	b.Read();
	b.Display();
	cout << c.GetLength(a, b) << endl;

	cin.get();
	return 0;
}
