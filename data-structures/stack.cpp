#include <iostream>
#include "stack.h"

stack::stack()
{
    this->back = NULL;
    this->count = 0;
}

void stack::push(int value)
{
    node* newNode = static_cast<node*>(malloc(sizeof(node)));
    newNode->value = value;
    
    if (this->back == NULL) this->back = newNode;
    
    else
    {
        newNode->next = this->back;
        this->back = newNode;
    }
    
    count++;
}

int stack::pop()
{
    node* toDelete = this->back;
    int value = toDelete->value;
    
    if (this->back->next != NULL) this->back = this->back->next;
    
    delete toDelete;
    this->count--;
    
    return value;
}

void stack::printStack()
{
    node* current = this->back;
    
    for(int i = 0; i < this->count; i++)
    {
        std::cout << current->value << "\n";
        current = current->next;
    }
}