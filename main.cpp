#include <iostream>
#include "bracket_checker.h"

int main() {
    const char* correctExpression = "({x-y-z} * [x + 2y] - (z + 4x));";
    const char* incorrectExpression = "([x-y-z} * [x + 2y) - {z + 4x)];";

    if (BracketChecker::checkBrackets(correctExpression)) {
        std::cout << "The expression is correct." << std::endl;
    }
    else {
        std::cout << "The expression is incorrect." << std::endl;
    }

    if (BracketChecker::checkBrackets(incorrectExpression)) {
        std::cout << "The expression is correct." << std::endl;
    }
    else {
        std::cout << "The expression is incorrect." << std::endl;
    }

    return 0;
}
