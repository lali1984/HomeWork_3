#include <iostream>

void Hello(void)
{
	std::cout << "\n\nInstruction:\nPleas enter an expression for calculation\nusing one of the proposed formats and press enter:\n";
	std::cout << "-----------------------------------------------------------------\n";
	std::cout << "| x + y -> '+' |  x - y -> '-' |  x * y -> '*' |  x / y  -> '/' |\n";
	std::cout << "-----------------------------------------------------------------\n";
	std::cout << "|   x! -> '!'  |log10(x) -> 'l'|pow(x, y)->'^' |  ln(x) -> 'n'  |\n";
	std::cout << "-----------------------------------------------------------------\n";
	std::cout << "|sqrt(x) -> 'q'| mod(x) -> 'm' |exp10(x) -> 'e'|  CLEAR -> 'c'  |\n";
	std::cout << "-----------------------------------------------------------------\n";

	std::cout << "Enter you data (Examples:\"67 + 78\", \"45 !\", \"-67 m\"):\n";

}
