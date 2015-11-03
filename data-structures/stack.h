#ifndef stack_h
#define stack_h

#include "node.h"

class stack
{

private:
    node* back;
    int count;

public:
    stack();
    void push(int value);
    int pop();
    void printStack();
};

#endif /* stack_h */
