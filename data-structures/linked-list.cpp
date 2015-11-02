#include <iostream>
#include "linked-list.h"

linkedList::linkedList()
{
    this->head = NULL;
    this->count = 0;
}
    
void linkedList::addNodeToFront(int value)
{
    node* newNode = static_cast<node*>(malloc(sizeof(node)));
    
    newNode->value = value;
    newNode->next = this->head;
    
    this->head = newNode;
    this->count++;
}
    
void linkedList::deleteNode(int value)
{
    node* previous = this->head;
    node* current = this->head;
    
    while (current != NULL)
    {
        if(current->value == value)
        {
            previous->next = current->next;
            
            if (current == this->head) this->head = this->head->next;
            
            delete current;
            this->count--;
            return;
        }
        
        previous = current;
        current = current->next;
    }
}

void linkedList::printNodes()
{
    node* current = this->head;
    while (current != NULL)
    {
        std::cout << current->value << "\n";
        current = current->next;
    }
}