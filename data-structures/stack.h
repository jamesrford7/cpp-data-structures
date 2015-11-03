//
//  stack.h
//  data-structures
//
//  Created by James Ford on 03/11/2015.
//  Copyright © 2015 James Ford. All rights reserved.
//

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
