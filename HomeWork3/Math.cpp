#include <iostream>
#include <cmath>
double Addition(double operand_1, double operand_2)
{
	return operand_1 + operand_2;
}

double Difference(double operand_1, double operand_2)
{
	return operand_1 - operand_2;
}

double Multiplication(double operand_1, double operand_2)
{
	return operand_1 * operand_2;
}

double Division(double operand_1, double operand_2)
{
	if (operand_2 == 0) // обработка исключения деления на "0"
	{
		std::cerr << "\n******Division by zero is not possible!******\n";
		return operand_1;
	}

	return operand_1 / operand_2;
}

double Factorial(double operand_1) // рекурсивная ф-ия факториала
{
	if (operand_1 < 0)
		return 0;
	else if (operand_1 == 0)
		return 1;
	else
		return operand_1 * Factorial(operand_1 - 1);
}

double LogorifmDecimal(double operand_1)
{
	if (operand_1 <= 0) //исключение логорифм "0" или меньше
	{
		std::cerr << "\n*****Logarithm less by zero or zero is not defined!******\n";
		return 0;
	}
	return log10(operand_1);
}

double LogorifmNature(double operand_1)
{
	if (operand_1 <= 0) //исключение логорифм "0" или меньше
	{
		std::cerr << "\n*****Logarithm less by zero or zero is not defined!******\n";
		return 0;
	}

	return log(operand_1);
}

double Sqrt(double operand_1)
{
	return sqrt(operand_1);
}

double Pow(double operand_1)
{
	double exponent;
	std::cout << "Enter exponent: ";
	std::cin >> exponent;
	return pow(operand_1, exponent);
}

double Modul(double operand_1)
{
	return abs(operand_1);
}

double Exponent(double operand_1)
{
	double a = 10;
	return pow(a, operand_1);
}