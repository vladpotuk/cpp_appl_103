#ifndef STACK_H
#define STACK_H

class Stack {
private:
    char* stackArray;  
    int capacity;      
    int top;           

public:
    Stack();                
    ~Stack();              
    void push(char c);      
    char pop();          
    bool isEmpty() const;   
    void clear();           
    char peek() const;      
};

#endif 

