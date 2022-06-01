#include<iostream>
#include<windows.h>
#include"myHead.h"
// список используемых операций
enum Operations 
{
	addition = '+',
	difference = '-',
	multiplication = '*',
	division = '/',
	factorial = '!',
	exponentiation = '^',
	ln = 'n',
	lg = 'l',
	modul = 'm',
	exponent10 = 'e'
};

int main()
{
	Hello(); // ф-ия приветствия

	double operand_1, operand_2, result;
	char operation = ' ';
	char EXIT = ' ';
	
	std::cin >> operand_1;

	while (EXIT != 'y')	
	{
		std::cin.clear();
		std::cin >> operation;
		if (operation == 'c') // обнуления буфера калькулятора
		{
			operand_1 = 0;
			std::cin >> operand_1;
			std::cin >> operation;
		}

		if (operation == '-' || operation == '+' || operation == '*' || operation == '/')
		{
			std::cin >> operand_2;

			switch (operation)
			{
			case Operations::addition:
				result = Addition(operand_1, operand_2);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::difference:
				result = Difference(operand_1, operand_2);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;

			case Operations::multiplication:
				result = Multiplication(operand_1, operand_2);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::division:
				result = Division(operand_1, operand_2);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			}
		}
		else if (operation == 'l' || operation == 'n' || operation == 'm' || operation == '^' || operation == '!' || operation == 'e')
		{
			switch (operation)
			{
			case Operations::factorial:
				result = Factorial(operand_1);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::lg:
				result = LogorifmDecimal(operand_1);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::ln:
				result = LogorifmNature(operand_1);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::exponentiation:
				result = Pow(operand_1);
				std::cout << "ANSWER = " << result;
				operand_1 = result;
				break;
			case Operations::modul:
				result = Modul(operand_1);
				std::cout << "ANSWER = " << result;
				operand_1 = result;	
				break;
			case Operations::exponent10:
				result = Exponent(operand_1);
				std::cout << "ANSWER = " << result << std::endl;
				operand_1 = result;
				break;
			}
		}
		else
		{
			std::cerr << "******Pleas make the right choice!******" << std::endl;
		}
		Sleep(2000);
		Hello();
		std::cout << "\nDo you want EXIT the program y/n (yes or no)?\t";
		std::cin >> EXIT;
		std::cout << operand_1;
	} 
}
