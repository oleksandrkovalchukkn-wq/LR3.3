// Варіант 18
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double R1; // вхідний параметр
	double R2; // вхідний параметр
	double y; // результат обчислення виразу
	double xp; // start
	double xk; // end
	double dx;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << setprecision(3) << "y" << setw(10) << setprecision(3) << "|" << endl;
	cout << "---------------------------" << endl;

	while (xp <= xk)
	{
		if (xp <= -2 * R1)
			y = -R1 * (xp + 2 * R1);
		else
			if (-2 * R1 < xp && xp <= 0)
				y = sqrt(pow(R1, 2) - pow((xp - R1), 2));
			else
				if (0 < xp && xp <= 2 * R2)
					y = -sqrt(pow(R2, 2) - pow((xp - R2), 2));
				else
					if (2 * R2 < xp && xp <= 6)
						y = -1 / (6 - 2 * R2) * (xp - 2 * R2);
					else
						y = -1;
		cout << "|" << setw(10) << setprecision(3) << y << setw(10) << setprecision(3) << "|" << endl;

		xp += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
