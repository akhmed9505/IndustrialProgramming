#include "code.h"
#include <iostream>

Type5::Type5(double b1, double c1)
{
	B = b1;
	C = c1;
}

void Type5::get_answer()
{
	double answer;
	answer = (-C) / B;
	std::cout << "Êîðåíü óðàâíåíèÿ: " << -C / B << std::endl;
}

void Type5::show()
{
	std::cout << "Óðàâíåíèå: " << B << "x" << " + " << C << " = 0" << std::endl;
}

Type6::Type6(double a1, double b1, double c1)
{
	A = a1;
	B = b1;
	C = c1;
}

void Type6::get_answer()
{
	double D;
	D = B * B - 4 * A * C;
	if (D == 0) {
		std::cout << "Óðàâíåíèå èìååò îäèí êîðåíü: " << (-B) / (2 * A) << std::endl;
	}
	else 
	{
		if (D > 0) {

		double x1, x2;
		x1 = (-B + sqrt(D)) / (2 * A);
		x2 = (-B - sqrt(D)) / (2 * A);

		std::cout << "Êîðíè óðàâíåíèÿ: " << std::endl << "x1 = " << x1 << std::endl << "x2 = " << x2 << std::endl;

	}
	else 
	{
	std::cout << "D < 0, êîðíåé íåò" << std::endl;
	}
	}
}

void Type6::show()
{
	std::cout << "Óðàâíåíèå: " << A << "x^2 + " << B << "x + " << C << " = 0" << std::endl;
}
