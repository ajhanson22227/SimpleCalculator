#include <iostream>

#include "Calculator.h"

int main() {
	double numberOne, numberTwo, answer;
	char operand;

	getExpression(numberOne, numberTwo, operand);
	answer = Calculate(numberOne, numberTwo, operand);

	std::cout << "And the Answer is.... " << answer << std::endl;

	return 0;
}