// Lab_03_3.cpp
// < Ковальчук Олександр >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R1; // вхідний параметр
	double R2; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -2 * R1)
		y = -R1 * (x + 2 * R1);
	else
		if (-2 * R1 < x && x <= 0)
			y = sqrt(pow(R1, 2) - pow((x - R1), 2));
		else
			if (0 < x && x <= 2 * R2)
				y = -sqrt(pow(R2, 2) - pow((x - R2), 2));
			else
				if (2 * R2 < x && x <= 6)
					y = -1 / (6 - 2 * R2) * (x - 2 * R2);
				else
					y = -1;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}
