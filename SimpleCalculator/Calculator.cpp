#include "Calculator.h"

#include <iostream>

double Calculate(double numberOne, double numberTwo, char operand) {
	if (operand == '+')
		return numberOne + numberTwo;
	else if (operand == '-')
		return numberOne - numberTwo;
	else if (operand == '/')
		return numberOne / numberTwo;
	else if (operand == '*')
		return numberOne * numberTwo;
	else
		return 0;
}

void getExpression(double &numberOne, double &numberTwo, char &operand) {
	std::cout << "Give me your Expression. Press enter after each input" << std::endl;
	std::cin >> numberOne;
	std::cin >> operand;
	std::cin >> numberTwo;
}