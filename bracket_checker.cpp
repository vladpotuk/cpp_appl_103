#include "bracket_checker.h"

bool BracketChecker::checkBrackets(const char* expression) {
    Stack stack;
    int index = 0;

    while (expression[index] != '\0') {
        char currentChar = expression[index];

        if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
            stack.push(currentChar);
        }
        else if (currentChar == ')' || currentChar == ']' || currentChar == '}') {
            if (stack.isEmpty()) {
               
                return false;
            }

            char topChar = stack.pop();
            if ((currentChar == ')' && topChar != '(') ||
                (currentChar == ']' && topChar != '[') ||
                (currentChar == '}' && topChar != '{')) {
                return false;
            }
        }

        index++;
    }

    // Перевірка, чи всі відкриваючі дужки мають відповідні закриваючі
    return stack.isEmpty();
}
