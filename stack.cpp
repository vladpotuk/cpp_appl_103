#include "stack.h"

Stack::Stack() : stackArray(nullptr), capacity(10), top(-1) {
    
    stackArray = new char[capacity];
}

Stack::~Stack() {
    
    delete[] stackArray;
}

void Stack::push(char c) {
    if (top == capacity - 1) {
        
        capacity *= 2;
        char* newArray = new char[capacity];
        for (int i = 0; i <= top; ++i) {
            newArray[i] = stackArray[i];
        }
        delete[] stackArray;
        stackArray = newArray;
    }
    stackArray[++top] = c;
}

char Stack::pop() {
    if (!isEmpty()) {
        return stackArray[top--];
    }
    return '\0'; 
}

bool Stack::isEmpty() const {
    return top == -1;
}

void Stack::clear() {
    top = -1; 
}

char Stack::peek() const {
    if (!isEmpty()) {
        return stackArray[top];
    }
    return '\0'; 
}
